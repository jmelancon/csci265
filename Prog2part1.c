#include <stdio.h>
#include <string.h>

int main(){
    int scoreCount, earnedPoints, totalPoints, perfScores, curScore, curTot;
    float average, perc;
    char grade;
    
    scoreCount = 0;
    earnedPoints = 0;
    totalPoints = 0;
    perfScores = 0;

    printf("Enter a score: ");
    scanf("%d", &curScore);

    while (curScore >= 0){
        printf("Enter the possible score: ");
        scanf("%d", &curTot);
        if (curTot == -1) { break; }
        scoreCount += 1;
        earnedPoints += curScore;
        totalPoints += curTot;
        if (curScore == curTot){
            perfScores += 1;
        }
        printf("\n");
        printf("Enter a score: ");
        scanf("%d", &curScore);
    }

    printf("\n");
    
    if (totalPoints != 0) { 
        perc = ((float) earnedPoints / (float) totalPoints) * 100;
        average = (float) earnedPoints / (float) scoreCount;
    }
    else { average = 0; perc = 0; }
     
    if (perc >= 90.0) { grade = 'A'; }
    else if (perc >= 80.0) { grade = 'B'; }
    else if (perc >= 70.0) { grade = 'C'; }
    else if (perc >= 60.0) { grade = 'D'; }
    else { grade = 'F'; }

    printf("Number of scores: %6d\n", scoreCount);
    printf("Total points: %10d\n", earnedPoints);
    printf("Total possible: %8d\n", totalPoints);
    printf("Average: %15.3f\n", average);
    printf("Grade: %17c\n", grade);
    printf("Perfect scores: %8d\n", perfScores);
}

