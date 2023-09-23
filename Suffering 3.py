import andknuckles as ak
numbers = [1,2,9,4,-10,7,6,8,3,5,11]
#andknuckles average, findmax, findmin, prefixsum, median, and 
#selectionsort function needs to have a predefined list
def main():
    ak.add(numbers)
    ak.add(1,2,3,4,5,6,7,8,9)
    ak.minus([1,1.2,1.3])
    ak.minus(1,1.2,1.3)
    ak.times(numbers)
    ak.divide(numbers)
    ak.average(numbers)
    ak.findmax(numbers)
    ak.findmin(numbers)
    ak.prefixsum(numbers)
    ak.median(numbers)
    ak.selectionsort(numbers,ascending = False)
    ak.oddeven(numbers)
    ak.oddeven(1,2,3,4)
if __name__ == "__main__":
    main()
