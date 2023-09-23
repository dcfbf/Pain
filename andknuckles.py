def add(*numbers):
    preNum = numbers[0]
    if type(preNum) is int:
        num0= preNum
        for i in range(1,len(numbers)):
            num0 += numbers[i]
    else:
        num0 = preNum[0]
        for i in range(1,len(preNum)):
            num0 += preNum[i]
    print (num0)
def minus(*numbers):
    preNum = numbers[0]
    if type(preNum) is int:
        num0= preNum
        for i in range(1,len(numbers)):
            num0 -= numbers[i]
    else:
        num0 = preNum[0]
        for i in range(1,len(preNum)):
            num0 -= preNum[i]
    print (num0)
def times(*numbers):
    preNum = numbers[0]
    if type(preNum) is int:
        num0= preNum
        for i in range(1,len(numbers)):
            num0 *= numbers[i]
    else:
        num0 = preNum[0]
        for i in range(1,len(preNum)):
            num0 *= preNum[i]
    print (num0)
def divide(*numbers):
    preNum = numbers[0]
    if type(preNum) is int:
        num0= preNum
        for i in range(1,len(numbers)):
            num0 /= numbers[i]
    else:
        num0 = preNum[0]
        for i in range(1,len(preNum)):
            num0 /= preNum[i]
    print (num0)
def average(data):
    ans0 = 0
    for i in range(0,len(data)):
        ans0 += data[i]
    ans0 /= len(data)
    print(ans0) 
def findmax(data):
    max0 = data[0]
    for i in range(1,len(data)):
        if max0 <= data[i]:
            max0 = data[i]
    print(max0)
def findmin(data):
    min0 = data[0]
    for i in range(1,len(data)):
        if min0 >= data[i]:
            min0 = data[i]
    print(min0)
def prefixsum(data):
    sum0 = data[0]
    for i in range(1,len(data)):
        sum0 += data[i]
    print(sum0)
def selectionsort(data, ascending=True):
    if ascending == True:
        for i in range(0,len(data)):
            for j in range(i+1,len(data)):
                if data[i] > data[j]:
                    k = j
                else:
                    k = i
                data[i],data[k] = data[k],data[i]
    else:
        for i in range(0,len(data)):
            for j in range(i+1,len(data)):
                if data[i] < data[j]:
                    k = j
                else:
                    k = i
                data[i],data[k] = data[k],data[i]
    print(data)
def median(numbers):
    lenNum = len(numbers)
    if lenNum % 2 != 0:
        lenNum //= 2
        mid = numbers[lenNum]
        print(mid)
    else:
        lenNum //= 2
        mid1 = numbers[lenNum]
        lenNum -= 1
        mid2 = numbers[lenNum]
        ans = mid1 + mid2
        ans /= 2
        print(ans)
def oddeven(*numbers):
    preNum = numbers[0]
    odd = 0
    even = 0
    if type(preNum) is int:
        for i in range(0,len(numbers)):
            if numbers[i] % 2 != 0:
                odd += 1
            else:
                even += 1
    else:
        for i in range(0,len(preNum)):
            if preNum[i] % 2 != 0:
                odd += 1
            else:
                even += 1
    print("number of odd:",odd)
    print("number of even:",even)

