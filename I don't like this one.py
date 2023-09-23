
# stuff to decode
var0 = "abacabac"
var1 = "qzxcq"
var2 = "jjeeffff"
var3 = "jxabjekkefffggf"
listVar = [var0, var1, var2, var3]
#Variables and lists needed
i = 0
j = 0
answer = []
length = len(var1)

#makes sure that the while loop ends when everything is done
while i < length:
    #Makes it so that the j is always at a different point from i
    j = i + 1
    #makes sure that the loop ends even if there is nothing repeating at the end, the loop will end
    while j < length:
        #Compares i: the one that if j is the same as it, it will be added to the final message
        if var1[i] == var1[j]:
            # if it is the same, i will be added to the answer
            answer.append(var1[i])
            #moves i to the next spot in the list
            i = j + 1
            #restarts everything so that the comparing process can repeat
            break;
        #If it isn't the same, j will move to the next spot in the list
        j += 1
           
print(answer)


