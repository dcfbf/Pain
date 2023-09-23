def s_decode(x):
    #finding the length of the list in order to know how many digits there are
    lenList = len(x)

    #if there is no number in the list, this is what happens
    if lenList == 0:
        return -1

    #number that is going to be put out
    sumX = 0
    power = lenList - 1
    
    #finding the value of the list in decimal form
    for i in x:
        tempVar = i
        if tempVar == 1 or tempVar == 0:
            tempVar = i*2
            tempVar = tempVar ** power
            tempVar = tempVar * i
            power -= 1
            sumX += tempVar
        else:
            return -1
           
    #Puts the answer in decoded
    return sumX
