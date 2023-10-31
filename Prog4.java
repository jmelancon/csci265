/*
 * Joseph Melancon
 * joseph.melancon@und.edu
 */

import java.util.*;

public class Prog4{
    public static int findMax (int[] intList){
        /*
        Find the max value of a given list.

        intList: List of integers to search through.
        Returns an int.
        Returns -1 if the list cannot be worked on.
        */
        if (intList.length > 0){
            int maxVal = intList[0];
            for(int i : intList){
                if (i > maxVal){
                    maxVal = i;
                }
            }
            return maxVal;
        }
        else{
            return -1;
        }

    }

    public static int findMin (int[] intList){
        /*
        Find the min value of a given list.

        intList: List of integers to search through.
        Returns an int.
        Returns -1 if the list cannot be worked on.
        */
        if (intList.length > 0){
            int minVal = intList[0];
            for(int i : intList){
                if (i < minVal){
                    minVal = i;
                }
            }
            return minVal;
        }
        else{
            return -1;
        }

    }

    public static void adjustList(int[] theList, int lowLimit, int highLimit){
        /*
        Clamp values of a list.

        theList: List of integers to clamp.
        lowLimit: Lower clamp value. Integer.
        highLimit: Upper clamp value. Integer.
        Returns nothing.
        */

        for (int i = 0; i < theList.length; i++){
            if ((lowLimit > theList[i]) | (highLimit < theList[i])){
                theList[i] = lowLimit > theList[i] ? lowLimit : highLimit;
            }
        }
    }

    public static int[] mergeLists (int[] list1, int[] list2){
        /*
        Merge two lists.

        list1: Leftmost list
        list2: Rightmost list
        Returns a concatenation of these two lists.
        */
        int[] newList = new int[list1.length + list2.length];
        for (int i = 0; i < list1.length; i++){
            newList[i] = list1[i];
        }
        for (int i = 0; i < list2.length; i++){
            newList[i + list1.length] = list2[i];
        }
        return newList;
    }

    public static double calcAverage(int[] theList){
        /*
        Find the average value of a list.

        intList: List of integers to search through.
        Returns an int.
        Returns -1.0 if the list cannot be averaged.
        */
    if (theList.length > 0){
            int count = 0;
            int total = 0;
            for (int i : theList){
                total += i;
                count++;
            }
            return (double) (((double) total) / ((double) count));
        }
        else{
            return -1.0;
        }
    }

    public static int[] valuesWithinRange(int[] theList, int lowLimit, int highLimit){
        /*
        Cut out values that don't fall between an upper and lower limit
        in a list.

        theList: List of integers to clamp.
        lowLimit: Lower clamp value. Integer.
        highLimit: Upper clamp value. Integer.
        Returns a new list.
        */
        int count = 0;
        for (int i : theList){
            if ((i >= lowLimit) && (i <= highLimit)){
                count++;
            }
        }
        int[] newList = new int[count];
        count = 0;
        for(int i : theList){
            if ((i >= lowLimit) && (i <= highLimit)){
                newList[count] = i;
                count++;
            }
        }
        return newList;
    }

    public static int findInList(int[] theList, int valueToFind, int startingIndex){
        /*
        Find the index of the first occurrence of a given integer in a list.

        theList: List of integers to seek through.
        valueToFind: Integer value to search for.
        startingIndex: Index to start search at.
        Returns an index value or -1 if the specified value isn't found.
        */
        int res = -1;
        for (int i = startingIndex; i < theList.length; i++){
            if (theList[i] == valueToFind){
                res = i;
                break;
            }
        }
        return res;
    }

    public static int findInList(String[] theList, String valueToFind, int startingIndex){
        /*
        Find the index of the first occurrence of a given char in a list of strings.

        theList: List of strings to seek through.
        valueToFind: Letter to search for.
        startingIndex: Index to start search at.
        Returns an index value or -1 if the specified value isn't found.
        */
        int res = -1;
        for (int i = startingIndex; i < theList.length; i++){
            if (theList[i] == valueToFind){
                res = i;
                break;
            }
        }
        return res;
    }


    public static int findInList(int[] theList, int valueToFind){
        /*
        Find the index of the first occurrence of a given integer in a list.

        theList: List of integers to seek through.
        valueToFind: Integer value to search for.
        Returns an index value or -1 if the specified value isn't found.
        */
        return findInList(theList, valueToFind, 0);
    }

    public static int findInList(String[] theList, String valueToFind){
        /*
        Find the index of the first occurrence of a given char in a list of strings.

        theList: List of strings to seek through.
        valueToFind: Letter to search for.
        Returns an index value or -1 if the specified value isn't found.
        */
        return findInList(theList, valueToFind, 0);
    }

    public static void main(String[] args){
        System.out.println("Hello Java ☕");
        
        System.out.println("findMax of blank list: " + findMax(new int[] {}));
        System.out.println("findMax of new int[] {5}: " + findMax(new int[] {5}));
        System.out.println("findMax of new int[] {5, 2}: " + findMax(new int[] {5, 2}));

        System.out.println("findMin of blank list: " + findMin(new int[] {}));
        System.out.println("findMin of new int[] {5}: " + findMin(new int[] {5}));
        System.out.println("findMin of new int[] {5, 2}: " + findMin(new int[] {5, 2}));

        int[] tmpList = {2, 4, 6, 8, 10, 12, 14};
        adjustList(tmpList, 5, 10);
        System.out.println("adjustList on int[] {2, 4, 6, 8, 10, 12, 14} with clamp (5, 10): " + 
                Arrays.toString(tmpList));
        tmpList = null;

        System.out.println("mergeLists for [2, 4] and [6, 8]: "
                + Arrays.toString(mergeLists(new int[] {2, 4}, new int[] {6, 8})));

        System.out.println("calcAverage of [2, 4, 6, 8]: " + calcAverage(new int[] {2, 4, 6, 8}));

        System.out.println("valuesWithinRange with limits (5, 10) for [0, 2, 4, 6, 8, 10, 12, 14]: "
                + Arrays.toString(valuesWithinRange(new int[] {0, 2, 4, 6, 8, 10, 12, 14}, 5, 10)));

        System.out.println("findInList value 6 for list [0, 2, 4, 6, 8, 10, 12, 14]: "
                + findInList(new int[] {0, 2, 4, 6, 8, 10, 12, 14}, 6));
        System.out.println("findInList value 6 for list [0, 2, 4, 6, 8, 10, 12, 14] starting at index 2: "
                + findInList(new int[] {0, 2, 4, 6, 8, 10, 12, 14}, 6, 2));
        System.out.println("findInList value 6 for list [0, 2, 4, 6, 8, 10, 12, 14] starting at index 5: "
                + findInList(new int[] {0, 2, 4, 6, 8, 10, 12, 14}, 6, 5));
        System.out.println("findInList value \"c\" for string \"csci 265\": " 
                + findInList(new String[] {"c", "s", "c", "i", " ", "2", "6", "5"}, "c"));
        System.out.println("findInList value \"7\" for string \"csci 265\": "
                + findInList(new String[] {"c", "s", "c", "i", " ", "2", "6", "5"}, "7", 0));
    }
}
