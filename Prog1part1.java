import java.util.*;

public class Prog1part1{
   public static void main (String[] args){
      Scanner keyboard;
      keyboard = new Scanner(System.in);
      
      String first, last, address, city, state, zip;

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
      zip = keyboard.nextLine();

      System.out.println("\n" + first + " " + last);
      System.out.println(address);
      System.out.println(city + ", " + state + "  " + zip);
   }
}

