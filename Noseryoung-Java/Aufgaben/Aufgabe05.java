import java.util.Scanner;

public class Aufgabe05 {
    public static void main(String[] args) {
        int start;
        int end;
        int sum = 0; 

        Scanner input = new Scanner(System.in);

        System.out.print("Starting Number: ");
        start = input.nextInt(); 
        System.out.print("End Number: ");
        end = input.nextInt();
        input.close();


        for (int i = start; i <= end; i++) {
            sum += i;
        }

        System.out.printf("The sum from %d to %d is: %d\n", start, end, sum); 

    }
}
