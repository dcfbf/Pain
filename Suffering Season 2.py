'''
listA = [9,32,2,1,5]
lenLista = len(listA) - 1
lenLista2 = len(listA) - 1 
front=0
while lenLista > 0:
    num1 = listA[lenLista2]
    num2 = listA[lenLista2-1]
    if num1 > num2:
        listA.remove(num2)
        listA.insert(front,num2)
    else:
        listA.remove(num1)
        listA.insert(front,num1)
    lenLista -= 1
    front += 1
print(listA)
'''
def sort(listA):
    for i in range(0,len(listA)):
        for j in range(i+1,len(listA)):
            if listA[i] > listA[j]:
                k = j
            else:
                k = i
            listA[i],listA[k] = listA[k],listA[i]
def main():
    listA = [9,32,2,1,5]
    sort(listA)
    print(listA)
if __name__ == "__main__":
    main()
            

