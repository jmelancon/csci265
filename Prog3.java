import java.util.*;

public class Prog3{
    public static int square(int intValue){
        return intValue * intValue;
    }

    public static int sumOfSquares(int intValue){
        int total = 0;
        for (int i = 0; i < intValue; i++)
            total += square(i + 1);
        return total;
    }

    public static boolean isOdd(int intValue){
        return (intValue % 2) == 1;
    }

    public static boolean isEven(int intValue){
        return isOdd(intValue) == false;
    }

    public static int compareTo(int intValue1, int intValue2){
        return ((intValue1 > intValue2) ? 1 : 0) - ((intValue1 < intValue2) ? 1: 0);
    }

    public static int maxMagnitude(int intValue1, int intValue2, int intValue3){
        int maxMag = intValue1;
        if (Math.abs(intValue2) > Math.abs(maxMag))
            maxMag = intValue2;
        if (Math.abs(intValue3) > Math.abs(maxMag))
            maxMag = intValue3; 
        return maxMag;
    }

    public static int daysInFebruary(int year){
        return ((year % 4 == 0) && (!(year % 100 == 0) || year % 400 == 0)) ? 29 : 28;
    }

    public static String militaryToRegularTime(int militaryTime){
        int minutes = militaryTime % 100;
        int hours = (int) (militaryTime / 100) % 12;
        if (hours == 0)
            hours = 12;
        String ampm = "PM";
        if (militaryTime < 1200)
            ampm = "AM";
        return String.format("%d:%02d %s", hours, minutes, ampm);
    }


    public static void main (String[] args){
        System.out.println("Hello Java");
        System.out.println("Square of 5: " + square(5));
        System.out.println("Square of 6: " + square(6));
        System.out.println("Sum of squares up to 3: " + sumOfSquares(3));
        System.out.println("Sum of squares up to 4: " + sumOfSquares(4));
        System.out.println("Value 3 is even? " + isEven(3));
        System.out.println("Value 4 is even? " + isEven(4));
        System.out.println("Value 3 is odd? " + isOdd(3));
        System.out.println("Value 4 is odd? " + isOdd(4));
        System.out.println("Compare result for 3, 4: " + compareTo(3, 4));
        System.out.println("Compare result for 6, 5: " + compareTo(6, 5));
        System.out.println("Compare result for 7, 7: " + compareTo(7, 7));
        System.out.println("maxMagnitude(17, 5, 2) returns " + maxMagnitude(17, 5, 2));
        System.out.println("maxMagnitude(10, -20, 2) returns " + maxMagnitude(10, -20, 2));
        System.out.println("maxMagnitude(17, 5, 99) returns " + maxMagnitude(17, 5, 99));
        System.out.println("daysInFebruary(2023) returns " + daysInFebruary(2023));
        System.out.println("daysInFebruary(2024) returns " + daysInFebruary(2024));
        System.out.println("daysInFebruary(1500) returns " + daysInFebruary(1500));
        System.out.println("daysInFebruary(1600) returns " + daysInFebruary(1600));
        System.out.println("militaryToRegularTime(500) returns " +  militaryToRegularTime(500));
        System.out.println("militaryToRegularTime(1330) returns " +  militaryToRegularTime(1330));
        System.out.println("militaryToRegularTime(30) returns " +  militaryToRegularTime(30));
    }
}
