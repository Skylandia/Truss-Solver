# Dependency
import hikari
import lightbulb
import re
import matlab.engine
import configparser
import os

print('1')
config = configparser.ConfigParser()
print('2')
config.read('config.ini')
print('3')
config.sections()
print('4')
bot_token = config['Discord']['Bot Key']
print('5')

bot = lightbulb.BotApp(token=bot_token)
eng = matlab.engine.start_matlab()


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
@lightbulb.command("seize", "Seizes the means of production for the motherland")
@lightbulb.implements(lightbulb.SlashCommand)
async def seize(ctx):
    await ctx.respond("Attempting to run MATLAB functions")
    try:
        future = eng.sqrt(4.0, background=True)
        while not future.done():
            pass
        await ctx.respond("The square root of 4 is" + str(future.result()))
    except:
        await ctx.respond("Failed")


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
    await ctx.respond("Attempting to run MATLAB functions, Solving Truss")

    future = eng.pyTrussSolve_input(ctx.options.locations,
                                    ctx.options.connections,
                                    ctx.options.weightnode,
                                    ctx.options.safteyfactor,
                                    ctx.options.maxcost,
                                    int(ctx.user.id),
                                    background=True,
                                    nargout=1)
    while not future.done():
        pass
    outbound_file = hikari.File(
        "/Users/Mack/Documents/MATLAB/Truss Solver/OutboundGraphics/" + str(ctx.author.id) + ".png")
    await ctx.respond(outbound_file)
    if os.path.exists("/OutboundGraphics/" + str(ctx.author.id) + ".png"):
        os.remove("/OutboundGraphics/" + str(ctx.author.id) + ".png")
    await ctx.respond(future.result())



bot.run()
