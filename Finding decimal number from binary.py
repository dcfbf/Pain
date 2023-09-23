"""
#list
num = [1,0,1]

#finding the length of the list in order to know how many digits there are
lenList = len(num)

#number that is going to be put out
sumNum = 0
power = lenList - 1

#finding the value of the list in decimal form
for i in num:
    tempVar = i*2
    tempVar = tempVar ** power
    power -= 1
    sumNum += tempVar

#Shows the answer
print(sumNum)
"""
#list
x = [1,0,1]
def s_decode(x):
    #finding the length of the list in order to know how many digits there are
    lenList = len(x)

    #number that is going to be put out
    sumX = 0
    power = lenList - 1

    #finding the value of the list in decimal form
    for i in x:
        tempVar = i*2
        tempVar = tempVar ** power
        power -= 1
        sumX += tempVar

    #Puts the answer in decoded
    return sumX
s_decode(x)
