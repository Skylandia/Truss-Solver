# Dependency
import hikari
import lightbulb
import re
import matlab.engine
import configparser
import asyncio
import atexit

print('1')
config = configparser.ConfigParser()
print('2')
config.read('config.ini')
print('3')
config.sections()
print('4')
bot_token = config['Discord']['Bot Key']
print('5')
global bot
bot = lightbulb.BotApp(token=bot_token)
global eng
eng = matlab.engine.start_matlab("-desktop")
global matlab_queue
matlab_queue = asyncio.Queue()
global matlab_safety
matlab_safety = True


@bot.listen(hikari.GuildMessageCreateEvent)
async def our_noun(event):
    message_text = " " + event.content
    if " my " in (message_text.lower()) and "```" not in (message_text.lower()):
        capitalist_nonsense = (message_text.lower()).index(" my ")
        outbound_message = \
            "You mean," + re.sub(" my ", " ***our*** ", message_text[capitalist_nonsense:], flags=re.IGNORECASE)
        print(outbound_message)
        await event.message.respond(outbound_message)


@bot.command()
@lightbulb.option("locations", "A n*2 array of the [x,y] positions of each node, where n is the number of nodes")
@lightbulb.option("connections", "A m*2 array of which nodes connects to what, where m is the number of connects.")
@lightbulb.option("weightnode", "The location of the load")
@lightbulb.option("safteyfactor", "It's 0.8, but like ¯\_(ツ)_/¯")
@lightbulb.option("maxcost", "How much money you can spend on the WHOLE truss")
@lightbulb.command("solve-truss",
                   "Finds the optimal beam choice, cost, and max capacity of the truss. The bot will try and DM you")
@lightbulb.implements(lightbulb.SlashCommand)
async def truss_solve(ctx: lightbulb.Context) -> None:
    py_truss_solve_input = eng.pyTrussSolve_input
    matlab_queue.put_nowait([py_truss_solve_input,
                            ctx.user,
                            ctx.options.locations,
                            ctx.options.connections,
                            ctx.options.weightnode,
                            ctx.options.safteyfactor,
                            ctx.options.maxcost,
                            int(ctx.user.id)])
    await ctx.respond(f"Added Truss to queue, you are {matlab_queue.qsize():n} in queue")


@bot.listen(hikari.StartedEvent)
async def matlab_worker(event) -> None:
    print("MATLAB Online")
    global matlab_safety
    while matlab_safety:
        func_inputs = await matlab_queue.get()
        user = func_inputs[1]
        await user.send(content="You are now first in queue, if no further message received, panic")
        try:
            fn = func_inputs[0]
            future = fn(func_inputs[2::], background=True, nargout=2)
            while not future.done():
                pass
            outbound_string, file_location = future.result()
            outbound_file = hikari.File(file_location)
            await user.send(content=outbound_string,
                            attachment=outbound_file)
        except:
            print("panic, task failed")
            await user.send(content="Received bad something, hope I don't brick myself now")
        matlab_queue.task_done()


@atexit.register
def matlab_safety_switch():
    global matlab_safety
    matlab_safety = False
    eng.quit()
    print("MATLAB Offline")


bot.run()
