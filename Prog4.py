'''
Joseph Melancon
joseph.melancon@und.edu
'''

def findMax (theList: list) -> int:
    """
    Find the max value of a given list.

    theList: List of integers to search through.
    Returns an int.
    Returns -1 if the list cannot be worked on.
    """
    if len(theList) > 0:
        maxVal = theList[0]
        for i in theList:
            if i > maxVal:
                maxVal = i
        return maxVal
    else:
        return -1

def findMin (theList: list) -> int:
    """
    Find the minimum value of a given list.

    theList: List of integers to search through.
    Returns an int.
    Returns -1 if the list cannot be worked on.
    """
    if len(theList) > 0:
        minVal = theList[0]
        for i in theList:
            if i < minVal:
                minVal = i
        return minVal
    else:
        return -1

def adjustList (theList: list, lowLimit: int, highLimit: int) -> None:
    """
    Clamp values of a list.

    theList: List of integers to clamp.
    lowLimit: Lower clamp value. Integer.
    highLimit: Upper clamp value. Integer.
    Returns nothing.
    """
    for i in range(len(theList)):
        if not (lowLimit <= theList[i] <= highLimit):
            theList[i] = lowLimit if theList[i] < lowLimit else highLimit

def mergeLists (list1: list, list2: list) -> list:
    """
    Merge two lists.

    list1: Leftmost list
    list2: Rightmost list
    Returns a concatenation of these two lists.
    """
    return list1 + list2

def calcAverage (intList: list) -> float:
    """
    Find the average value of a list.

    intList: List of integers to search through.
    Returns an int.
    Returns -1.0 if the list cannot be averaged.
    """
    if len(intList) > 0:
        total = 0
        count = 0
        for i in intList:
            total+= i
            count += 1
        return total / count
    else:
        return -1.0

def valuesWithinRange (theList: list, lowLimit: int, highLimit: int) -> list:
    """
    Cut out values that don't fall between an upper and lower limit
    in a list.

    theList: List of integers to clamp.
    lowLimit: Lower clamp value. Integer.
    highLimit: Upper clamp value. Integer.
    Returns a new list.
    """
    newVals = []
    for i in theList:
        if (lowLimit <= i <= highLimit):
            newVals.append(i)
    return newVals

def findInList (scoresList: list | str, valueToFind: int | str, startingIndex: int = 0) -> int:
    """
    Find the index of the first occurrence of a given integer or character in a list or string.

    scoresList: List of integers or string to seek through.
    valueToFind: Integer or string value to search for.
    startingIndex: Index to start search at. Defaults to zero.
    Returns an index value or -1 if the specified value isn't found.
    """
    if len(scoresList) > 0 and len(scoresList) > startingIndex:
        index = startingIndex
        while index < len(scoresList):
            if scoresList[index] == valueToFind:
                break
            index += 1
        if index == len(scoresList):
            # Desired value was not found
            return -1
        else:
            return index
    else:
        return -1

def main():
    print("Hello Python 🐍")

    print("findMax of blank list:", findMax([]))
    print("findMax of [5]:", findMax([5]))
    print("findMax of [2, 5]:", findMax([2, 5]))

    print("findMin of blank list:", findMin([]))
    print("findMin of [5]:", findMin([5]))
    print("findMin of [2, 5]:", findMin([2, 5]))
    
    tmpList = [0, 2, 4, 6, 8, 10, 12, 14]
    adjustList(tmpList, 5, 10)
    print("adjustList with limits (5, 10) for [0, 2, 4, 6, 8, 10, 12, 14]:", tmpList)
    del tmpList

    print("calcAverage of [2, 4, 6, 8]:", calcAverage([2, 4, 6, 8]))

    print("mergeLists for [2, 4] and [6, 8]:", mergeLists([2, 4], [6, 8]))

    print("valuesWithinRange with limits (5, 10) for [0, 2, 4, 6, 8, 10, 12, 14]:", valuesWithinRange([0, 2, 4, 6, 8, 10, 12, 14], 5, 10))

    print("findInList value 6 for list [0, 2, 4, 6, 8, 10, 12, 14]:", findInList([0, 2, 4, 6, 8, 10, 12, 14], 6))
    print("findInList value 6 for list [0, 2, 4, 6, 8, 10, 12, 14] starting at index 2:", findInList([0, 2, 4, 6, 8, 10, 12, 14], 6, 2))
    print("findInList value 6 for list [0, 2, 4, 6, 8, 10, 12, 14] starting at index 5:", findInList([0, 2, 4, 6, 8, 10, 12, 14], 6, 5))
    print("findInList value 5 for list [0, 2, 4, 6, 8, 10, 12, 14]:", findInList([0, 2, 4, 6, 8, 10, 12, 14], 5))

    print("findInList value 'c' for string \"csci 265\":", findInList("csci 265", 'c'))
    print("findInList value 'c' for string \"csci 265\" starting at index 1:", findInList("csci 265", 'c', 1))
    print("findInList value '7' for string \"csci 265\":", findInList("csci 265", '7'))





if __name__ == "__main__":
    main()
