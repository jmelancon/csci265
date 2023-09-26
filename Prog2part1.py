def main():
    scoreCount = 0
    earnedPoints = 0
    totalPoints = 0
    perfScores = 0

    curScore = int(input("Enter a score: "))
    

    while (curScore >= 0):
        curTot = int(input("Enter the possible score: "))
        if (curTot == -1): break
        scoreCount += 1
        earnedPoints += curScore
        totalPoints += curTot
        if (curScore == curTot): perfScores += 1
        curScore = int(input("\nEnter a score: "))

    print()
    
    if (totalPoints != 0): average = (float(earnedPoints) / float(totalPoints)) * 100
    else: average = 0
    
    if (average >= 90.0): grade = 'A'
    elif (average >= 80.0): grade = 'B'
    elif (average >= 70.0): grade = 'C'
    elif (average >= 60.0): grade = 'D'
    else: grade = 'F'


    print(f"Number of scores: {scoreCount:6d}")
    print(f"Total points: {earnedPoints:10d}")
    print(f"Total possible: {totalPoints:8d}")
    print(f"Average: {average:15.3f}")
    print(f"Grade: {grade:>17s}")
    print(f"Perfect scores: {perfScores:8d}")

if __name__ == "__main__":
    main()

