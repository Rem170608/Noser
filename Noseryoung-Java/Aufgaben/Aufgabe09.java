import java.util.Scanner;

public class Aufgabe09 {
    public static boolean isLeapYear(int year) {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                return year % 400 == 0;
            }return true;
        }return false; 
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        
        System.out.print("Enter a year to check if it's a leap year: ");
        int year = scanner.nextInt();
        boolean isLeap = isLeapYear(year); 
        System.out.println(year + " is a leap year: " + isLeap);
        scanner.close();
    }
}

