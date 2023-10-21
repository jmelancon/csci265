#include <iostream>
using namespace std;

extern "C" {
    int square(int intValue);
    int sumOfSquares(int intValue);
    bool isOdd(int intValue);
    bool isEven(int intValue);
    int compareTo(int intValue1, int intValue2);
    int maxMagnitude(int intValue1, int intValue2, int intValue3);
    int daysInFebruary(int year);
    char* militaryToRegularTime(int militaryTime);
}

int square(int intValue){
    return intValue * intValue;
}

int sumOfSquares(int intValue){
    int total = 0;
    for (int i = 0; i < intValue; i++)
        total += square(i + 1);
    return total;
}

bool isOdd(int intValue){
    return (bool) (intValue % 2);
}

bool isEven(int intValue){
    return isOdd(intValue) == false;
}

int compareTo(int intValue1, int intValue2){
    return (int) (intValue1 > intValue2) - (int) (intValue1 < intValue2);
}

int maxMagnitude(int intValue1, int intValue2, int intValue3){
    int maxMag = intValue1;
    if (abs(intValue2) > abs(maxMag))
        maxMag = intValue2;
    if (abs(intValue3) > abs(maxMag))
        maxMag = intValue3; 
    return maxMag;
}

int daysInFebruary(int year){
    return 28 + (int) ((year % 4 == 0) && (!(year % 100 == 0) || year % 400 == 0));
}

char* militaryToRegularTime(int militaryTime){
    char* buffer = (char*) malloc(9 * sizeof(char));
    int minutes = militaryTime % 100;
    int hours = (militaryTime / 100) % 12;
    if (hours == 0)
        hours = 12;
    char* ampm = "PM";
    if (militaryTime < 1200)
        ampm = "AM";
    snprintf(buffer, 9, "%d:%02d %s", hours, minutes, ampm);
    return buffer;
}

int main(){
    cout << "Hello CPP" << endl;
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of 6: " << square(6) << endl;
    cout << "Sum of squares up to 3: " << sumOfSquares(3) << endl;
    cout << "Sum of squares up to 4: " << sumOfSquares(4) << endl;
    cout << "Value 3 is even? " << isEven(3) << endl;
    cout << "Value 4 is even? " << isEven(4) << endl;
    cout << "Value 3 is odd? " << isOdd(3) << endl;
    cout << "Value 4 is odd? " << isOdd(4) << endl;
    cout << "Compare result for 3, 4: " << compareTo(3, 4) << endl;
    cout << "Compare result for 6, 5: " << compareTo(6, 5) << endl;
    cout << "Compare result for 7, 7: " << compareTo(7, 7) << endl;
    cout << "maxMagnitude(17, 5, 2) returns " << maxMagnitude(17, 5, 2) << endl;
    cout << "maxMagnitude(10, -20, 2) returns " << maxMagnitude(10, -20, 2) << endl;
    cout << "maxMagnitude(17, 5, 99) returns " << maxMagnitude(17, 5, 99) << endl;
    cout << "daysInFebruary(2023) returns " << daysInFebruary(2023) << endl;
    cout << "daysInFebruary(2024) returns " << daysInFebruary(2024) << endl;
    cout << "daysInFebruary(1500) returns " << daysInFebruary(1500) << endl;
    cout << "daysInFebruary(1600) returns " << daysInFebruary(1600) << endl;
    cout << "militaryToRegularTime(500) returns " << militaryToRegularTime(500) << endl;
    cout << "militaryToRegularTime(1330) returns " << militaryToRegularTime(1330) << endl;
    cout << "militaryToRegularTime(30) returns " << militaryToRegularTime(30) << endl;
}
