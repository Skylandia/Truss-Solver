import configparser


config = configparser.ConfigParser()
config['Discord'] = {}
config['Discord']['Bot Key'] = 'OTQwMTUwMzg0MzQ3OTkyMDc0.YgDNRg.VVcbQxG5uM-POp8n8YB3ZPnRfpY'
with open('config.ini', 'w') as configfile:
    config.write(configfile)