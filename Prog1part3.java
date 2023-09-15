import java.util.*;

public class Prog1part3{
    public static void main (String[] args){
        Scanner keyboard;
        keyboard = new Scanner(System.in);

        int ms, sec, min, track;

        System.out.print("Milliseconds: ");
        track = keyboard.nextInt();
        
        min = track / 60000;
        track = track - (60000 * min);

        sec = track / 1000;
        track = track - (1000 * sec);

        ms = track;

        System.out.println("Minute(s): " + min + "\nSecond(s): " + sec + "\nMilliseconds: " + ms);
    }
}
