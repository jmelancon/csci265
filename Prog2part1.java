import java.util.*;

public class Prog2part1{
   public static void main (String[] args){
      Scanner keyboard;
      keyboard = new Scanner(System.in);

      int scoreCount, earnedPoints, totalPoints, perfScores, curScore, curTot;
      float average;
      char grade;
      
      scoreCount = 0;
      earnedPoints = 0;
      totalPoints = 0;
      perfScores = 0;

      System.out.print("Enter a score: ");
      curScore = keyboard.nextInt();

      while (curScore >= 0){
          System.out.print("Enter the possible score: ");
          curTot = keyboard.nextInt();
          if (curTot == -1) { break; }
          scoreCount += 1;
          earnedPoints += curScore;
          totalPoints += curTot;
          if (curScore == curTot){
              perfScores += 1;
          }
          System.out.print("\nEnter a score: ");
          curScore = keyboard.nextInt();
      }

        
      if (totalPoints != 0) { average = ((float) earnedPoints / (float) totalPoints) * 100; }
      else { average = 0; }
       
      if (average >= 90.0) { grade = 'A'; }
      else if (average >= 80.0) { grade = 'B'; }
      else if (average >= 70.0) { grade = 'C'; }
      else if (average >= 60.0) { grade = 'D'; }
      else { grade = 'F'; }


      System.out.print(String.format("Number of scores: %6d\n", scoreCount));
      System.out.print(String.format("Total points: %10d\n", earnedPoints));
      System.out.print(String.format("Total possible: %8d\n", totalPoints));
      System.out.print(String.format("Average: %15.3f\n", average));
      System.out.print(String.format("Grade: %17c\n", grade));
      System.out.print(String.format("Perfect scores: %8d\n", perfScores));
   }
}

