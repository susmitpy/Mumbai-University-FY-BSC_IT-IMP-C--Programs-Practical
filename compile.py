import os

for file in os.listdir("./"):
    if file[-2:] == ".c":
        os.system("gcc -o {} {} -w".format(file[:-2],file))
