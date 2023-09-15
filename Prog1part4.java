import java.util.*;

public class Prog1part4{
    public static void main (String[] args){
        Scanner keyboard;
        keyboard = new Scanner(System.in);
        
        int pennies, nickels, dimes, quarters, total, cents, dollars;

        System.out.print("Quarters: ");
        quarters = keyboard.nextInt();

        System.out.print("Dimes: ");
        dimes = keyboard.nextInt();

        System.out.print("Nickels: ");
        nickels = keyboard.nextInt();

        System.out.print("Pennies: ");
        pennies = keyboard.nextInt();

        total = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
        cents = total % 100;
        dollars = (total - cents) / 100;

        System.out.println("Amount: " + dollars + "." + String.format("%02d", cents));
    }
}
