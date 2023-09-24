import java.util.*;

public class Prog2part2{
   public static void main (String[] args){
        Scanner keyboard;
        keyboard = new Scanner(System.in);

        char printChar;
        int x, y;
        
        System.out.print("Enter width: ");
        x = keyboard.nextInt();

        System.out.print("Enter height: ");
        y = keyboard.nextInt();
        
        System.out.print("Enter character: ");
        printChar = keyboard.next().charAt(0);

        System.out.print("\n");

        for(int i=0; i<y; i++){
            for (int j=0; j<x; j++){
                    System.out.print(printChar);
            }
            System.out.print("\n");
        }
    }
}
