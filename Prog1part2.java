import java.util.*;

public class Prog1part2{
   public static void main (String[] args){
      Scanner keyboard;
      keyboard = new Scanner(System.in);
      
      String first, last, address, city, state;
      int zip;

      System.out.print("First: ");
      first = keyboard.nextLine();

      System.out.print("Last: ");
      last = keyboard.nextLine();

      System.out.print("Address: ");
      address = keyboard.nextLine();

      System.out.print("City: ");
      city = keyboard.nextLine();

      System.out.print("State: ");
      state = keyboard.nextLine();

      System.out.print("Zip: ");
      zip = keyboard.nextInt();

      System.out.println("\n" + first + " " + last + "\n" + 
                         address + "\n" +
                         city + ", " + state + " " + zip);
   }
}

