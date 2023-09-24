import java.util.*;

public class Prog2part2{
   public static void main (String[] args){
        Scanner keyboard;
        keyboard = new Scanner(System.in);

        char printChar;
        int x, y, i, j;
        
        System.out.print("Enter width: ");
        x = keyboard.nextInt();

        System.out.print("Enter height: ");
        y = keyboard.nextInt();
        
        System.out.print("Enter character: ");
        printChar = keyboard.next().charAt(0);

        System.out.print("\n");

        i = 0;
        while(i < y){
            j = 0;
            while(j < x){
                    System.out.print(printChar);
                    j += 1;
            }
            System.out.print("\n");
            i += 1;
        }
    }
}
