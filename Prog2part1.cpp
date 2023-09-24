#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "For example:" << endl;
    int scoreCount, earnedPoints, totalPoints, perfScores, curScore, curTot;
    float average;
    string grade;
    
    scoreCount = 0;
    earnedPoints = 0;
    totalPoints = 0;
    perfScores = 0;

    cout << "Enter a score: ";
    cin >> curScore;

    while (curScore >= 0){
        cout << "Enter the possible score: ";
        cin >> curTot;
        if (curTot == -1) { break; }
        scoreCount += 1;
        earnedPoints += curScore;
        totalPoints += curTot;
        if (curScore == curTot){
            perfScores += 1;
        }
        cout << endl << "Enter a score: ";
        cin >> curScore;
    }
    
    if (totalPoints != 0) { average = ((float) earnedPoints / (float) totalPoints) * 100.0; }
    else { average = 0.0; }
    
    if (average >= 90.0) { grade = 'A'; }
    else if (average >= 80.0) { grade = 'B'; }
    else if (average >= 70.0) { grade = 'C'; }
    else if (average >= 60.0) { grade = 'D'; }
    else { grade = 'F'; }

    cout << endl << "Number of scores: " << right << setfill(' ') << setw(6) << scoreCount << endl;
    cout << "Total points: " << right << setfill(' ') << setw(10) << earnedPoints << endl;
    cout << "Total possible: " << right << setfill(' ') << setw(8) << totalPoints << endl;
    cout << "Average: " << setprecision(5) << showpoint << right << setfill(' ') << setw(15) << average << endl;
    cout << "Grade: " << right << setfill(' ') << setw(17) << grade << endl;
    cout << "Perfect scores: " << right << setfill(' ') << setw(8) << perfScores << endl;
}

