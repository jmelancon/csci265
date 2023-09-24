import java.util.*;

public class Prog2part3{
   public static void main (String[] args){
        Scanner keyboard;
        keyboard = new Scanner(System.in);

        int sv, ev, incr;
    
        System.out.print("Enter starting value: ");
        sv = keyboard.nextInt();

        System.out.print("Enter ending value: ");
        ev = keyboard.nextInt();

        if (sv > ev){
            incr = -1;
        } else {
            incr = 1;
        }

        System.out.print("\n");

        for (int i = sv; i != ev; i += incr){
            System.out.println(i);
        }

        System.out.println(ev);
   }
}

