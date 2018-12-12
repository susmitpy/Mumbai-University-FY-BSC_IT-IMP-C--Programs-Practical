import os

for file in os.listdir('./'):
    if (file[-2:] != ".c") and (file[-2:] != "re") and (file[-2:] != "py") and (file[-2:] != "sh"):
        os.system("./{}".format(file))
