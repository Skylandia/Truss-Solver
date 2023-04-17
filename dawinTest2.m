truss_count = 500;                  % number of trusses per generation
max_gens = 999;                     % number of generations until the program halts
leftmost_point = [-0.010, 0];       % x, y coords of the left support (pivot)
rightmost_point = [0.460, 0];       % x, y coords of the right support (roller)
safety_factor = 0.8;                % 
max_cost = 2.01;                    % dunno (was 280 000)
max_loads = zeros(1, max_gens);     % records the load capacity for the best truss in each generation
max_ratio = zeros(1, max_gens);     % records the load capacity over self-weight for each generation of trusses

load('region_definitions.mat')      % load variables with specifications for forbidden, loading, and support region/zones

gcp                         % start a new parallel (processing?) pool (whatever that means)
pctRunOnAll warning off     % turn off warnings on the client and all parallel pool workers

% first time population of trusses
trusses = prepTrussArray2(truss_count, leftmost_point, rightmost_point, loading_region, restricted_zones);
trusses = testTrussArray(trusses, safety_factor, max_cost);

for current_gen = 1:max_gens
    trusses = sortTrussArray(trusses);                          % sort by capacity / cost
    best_truss = trusses{1};

    % record the best and average truss load capacity for the current generation
    max_loads(current_gen) = best_truss.capasity;
    max_ratio(current_gen) = best_truss.capasity / best_truss.cost;

    % plot mean and max array
    subplot(2, 1, 1);
    plot( ...
        1:current_gen, max_loads(1:current_gen), ...
        1:current_gen, max_ratio(1:current_gen) ...
    )
    legend( ...                                                                 % surely there is a better way...
        { ...
            ['Highest Truss Capacity: ', num2str(max_loads(current_gen))], ...
            ['Highest Truss capacity/cost ratio: ', num2str(max_ratio(current_gen))] ...
        }, ...
        'Location', 'southeast' ...
    )
    set(gca, 'XAxisLocation', 'top', 'YAxisLocation', 'left');
    xlabel('Generation #')
    ylabel('Truss Capacity (N)')
    
    % draw current best truss
    subplot(2, 1, 2);
    endNodes = best_truss.endNodes;
    nodes = [[best_truss.nodesArray.x]; [best_truss.nodesArray.y]]';
    graph = generateTrussGraph2(nodes, endNodes);
    h = plotImageGraph(graph);
    highlight(h, best_truss.weightNode, 'NodeColor', 'r')
    title('Current Best Truss Design')
    
    % draw support, loading, & forbidden zones
    cur_plot = gca;
    cur_plot.YDir = 'normal';
    plotZone(cur_plot, loading_region)
    cellfun(@(sad) plotZone(cur_plot, sad), restricted_zones)
    
    % replace worse performing trusses with newly generated trusses for next gen
    trusses = snapArray(trusses, loading_region, restricted_zones);  % I assume this gets rid of the worse performing trusses
    trusses(truss_count/2 + 1:end) = ...                        % replace the bad ones with (hopefully) slightly better ones
        testTrussArray(trusses(truss_count/2 + 1:end), safety_factor, max_cost);
end
save('2023 Truss Comp v5')