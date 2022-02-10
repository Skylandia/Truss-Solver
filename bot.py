# Dependency
import hikari
import lightbulb
import re
import matlab.engine
import configparser

config = configparser.ConfigParser()
config.read('config.ini')
bot_token = config['Discord']['Bot Key']

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
        future = eng.sqrt(4.0,background=True)
        while not future.done():
            pass
        await ctx.respond("The square root of 4 is" + str(future.result()))
    except:
        await ctx.respond("Failed")


@bot.command()
@lightbulb.command("solve truss", "Finds the optimal beam choice, cost, and max capacity of the submitted truss \n "
                                  "Note: The bot will try and DM you")
@lightbulb.implements(lightbulb.SlashCommand)
async def trussSolve(ctx):

bot.run()
