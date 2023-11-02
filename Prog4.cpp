/*
 * Joseph Melancon
 * joseph.melancon@und.edu
 */

using namespace std;
#include <iostream>

int findMax(int size, int intList[]){
    /*
    Find the max value of a given list.

    size: Size of intList.
    intList: List of integers to search through.
    Returns an int.
    Returns -1 if the list cannot be worked on.
    */
    if (size > 0){
        int maxVal = intList[0];
        for(int i = 0; i < size; i++){
            if (intList[i] > maxVal){
                maxVal = intList[i];
            }
        }
        return maxVal;
    }
    else{
        return -1;
    }
}

int findMin(int size, int intList[]){
    /*
    Find the min value of a given list.

    size: Size of intList.
    intList: List of integers to search through.
    Returns an int.
    Returns -1 if the list cannot be worked on.
    */
    if (size > 0){
        int minVal = intList[0];
        for(int i = 0; i < size; i++){
            if (intList[i] < minVal){
                minVal = intList[i];
            }
        }
        return minVal;
    }
    else{
        return -1;
    }
}

void adjustList(int size, int theList[], int lowLimit, int highLimit){
    /*
    Clamp values of a list.

    size: Size of theList.
    theList: List of integers to clamp.
    lowLimit: Lower clamp value. Integer.
    highLimit: Upper clamp value. Integer.
    Returns nothing.
    */

    for (int i = 0; i < size; i++){
        if ((lowLimit > theList[i]) | (highLimit < theList[i])){
            theList[i] = lowLimit > theList[i] ? lowLimit : highLimit;
        }
    }
}

int* mergeLists (int size1, int list1[], int size2, int list2[]){
    /*
    Merge two lists.

    size1: Size of list1
    list1: Leftmost list
    size2: Size of list2
    list2: Rightmost list
    Returns a concatenation of these two lists.
    */
    int* newList = (int*) malloc((size1 + size2) * sizeof(int));
    for (int i = 0; i < size1; i++){
        newList[i] = list1[i];
    }
    for (int i = 0; i < size2; i++){
        newList[i + size1] = list2[i];
    }
    return newList;
}

double calcAverage (int size , int intList[]){
    /*
    Find the average value of a list.

    size: Size of intList.
    intList: List of integers to search through.
    Returns an int.
    Returns -1.0 if the list cannot be averaged.
    */
    if (size > 0){
        int count = 0;
        int total = 0;
        for (int i = 0; i < size; i++){
            total += intList[i];
            count++;
        }
        return (double) (((double) total) / ((double) count));
    }
    else{
        return -1.0;
    }
}

int* valuesWithinRange (int size, int theList[],int lowLimit, int highLimit){
    /*
    Cut out values that don't fall between an upper and lower limit
    in a list.

    size: Size of theList.
    theList: List of integers to clamp.
    lowLimit: Lower clamp value. Integer.
    highLimit: Upper clamp value. Integer.
    Returns a new list.
    */
    int count = 0;
    for (int i = 0; i < size; i++){
        if ((theList[i] >= lowLimit) && (theList[i] <= highLimit)){
            count++;
        }
    }
    int* newList = (int*) malloc(count * sizeof(int));
    count = 0;
    for(int i = 0; i < size; i++){
        if ((theList[i] >= lowLimit) && (theList[i] <= highLimit)){
            newList[count] = theList[i];
            count++;
        }
    }
    return newList;
}

int findInList (int size, int theList[], int valueToFind, int startingIndex){
    /*
    Find the index of the first occurrence of a given integer in a list.

    size: Size of theList.
    theList: List of integers to seek through.
    valueToFind: Integer value to search for.
    startingIndex: Index to start search at.
    Returns an index value or -1 if the specified value isn't found.
    */
    int res = -1;
    for (int i = startingIndex; i < size; i++){
        if (theList[i] == valueToFind){
            res = i;
            break;
        }
    }
    return res;
}

int findInList (int size, int theList[], int valueToFind){
    /*
    Find the index of the first occurrence of a given integer in a list.

    size: Size of theList.
    theList: List of integers to seek through.
    valueToFind: Integer value to search for.
    Returns an index value or -1 if the specified value isn't found.
    */
    return findInList(size, theList, valueToFind, 0);
}

int findInList (int size, string theList[], string valueToFind, int startingIndex){
    /*
    Find the index of the first occurrence of a given char in a list of strings.

    size: Size of theList.
    theList: List of strings to seek through.
    valueToFind: Letter to search for.
    startingIndex: Index to start search at.
    Returns an index value or -1 if the specified value isn't found.
    */
    int res = -1;
    for (int i = startingIndex; i < size; i++){
        if (theList[i] == valueToFind){
            res = i;
            break;
        }
    }
    return res;
}

int findInList (int size, string theList[], string valueToFind){
    /*
    Find the index of the first occurrence of a given char in a list of strings.

    size: Size of theList.
    theList: List of strings to seek through.
    valueToFind: Letter to search for.
    Returns an index value or -1 if the specified value isn't found.
    */
    return findInList(size, theList, valueToFind, 0);
}


#ifndef COMPILE_MAIN

void printArray(int size, int intList[]){
    cout << "[";
    for (int i = 0; i < size; i++){
        cout << intList[i];
        if ((i + 1) != size){
            cout << ", ";
        }
    }
    cout << "]";
}

void printArray(int size, char charList[]){
    cout << "[";
    for (int i = 0; i < size; i++){
        cout << charList[i];
        if ((i + 1) != size){
            cout << ", ";
        }
    }
    cout << "]";
}

int main(){
    cout << "Hello C++ ➕" << endl;
    cout << "findMax of blank list: " << findMax(0, new int[] {}) << endl;
    cout << "findMax of list {5}: " << findMax(1, new int[] {5}) << endl;
    cout << "findMax of list {5, 4}: " << findMax(2, new int[] {5, 4}) << endl;

    cout << "findMin of blank list: " << findMin(0, new int[] {}) << endl;
    cout << "findMin of list {5}: " << findMin(1, new int[] {5}) << endl;
    cout << "findMin of list {5, 4}: " << findMin(2, new int[] {5, 4}) << endl;

    int tmpList[] = {2, 4, 6, 8, 10, 12, 14};
    adjustList(7, tmpList, 5, 10);
    cout << "adjustList on int[] {2, 4, 6, 8, 10, 12, 14} with clamp (5, 10): ";
    printArray(7, tmpList);
    cout << endl;

    int* mergeList = mergeLists(2, new int[] {5, 4}, 2, new int[] {3, 2});
    cout << "mergeLists on int[] {5, 4} and int[] {3, 2}: ";
    printArray(4, mergeList);
    cout << endl;

    cout << "calcAverage on {3, 4, 5, 6}: " << calcAverage(4, new int[] {3, 4, 5, 6}) << endl;

    cout << "valuesWithinRange with limits (5, 10) for [0, 2, 4, 6, 8, 10, 12, 14]: ";
    printArray(3, valuesWithinRange(8, new int[] {0, 2, 4, 6, 8, 10, 12, 14}, 5, 10));
    cout << endl;

    cout << "findInList value 6 for list [0, 2, 4, 6, 8, 10, 12, 14]: "
        << findInList(8, new int[] {0, 2, 4, 6, 8, 10, 12, 14}, 6) << endl;
    cout << "findInList value 6 for list [0, 2, 4, 6, 8, 10, 12, 14] starting at index 2: "
        << findInList(8, new int[] {0, 2, 4, 6, 8, 10, 12, 14}, 6, 2) << endl;
    cout << "findInList value 6 for list [0, 2, 4, 6, 8, 10, 12, 14] starting at index 5: "
        << findInList(8, new int[] {0, 2, 4, 6, 8, 10, 12, 14}, 6, 5) << endl;
    
    cout << "findInList value \"c\" for string \"csci 265\": " 
        << findInList(8, new string[] {"c", "s", "c", "i", " ", "2", "6", "5"}, "c") << endl;
    cout << "findInList value \"7\" for string \"csci 265\": "
        << findInList(8, new string[] {"c", "s", "c", "i", " ", "2", "6", "5"}, "7") << endl;
}
#endif
