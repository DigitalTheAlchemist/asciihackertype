import random
import time
toConsole = ""
randonNum = 0
while True:
    #changing this number does... something
    for i in range(5):
        randonNum = random.randint(0, 20)
        #stores a random amount of whitespace
        for i in range(randonNum):
            toConsole += " "

        toConsole += str(random.randint(0, 1))
    print(toConsole)
    time.sleep(0.015)