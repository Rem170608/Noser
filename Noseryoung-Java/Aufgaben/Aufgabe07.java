import java.util.Scanner;

public class Aufgabe07 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Number: ");
        if (!input.hasNext()) {
            input.close();
            return;
        }
        String s = input.next().trim();
        input.close();
        if (s.startsWith("-")) {
            System.out.printf("The number %s is not a palindrome.%n", s);
            return;
        }
        String rev = new StringBuilder(s).reverse().toString();
        if (s.equals(rev)) {
            System.out.printf("The number %s is a palindrome.%n", s);
        } else {
            System.out.printf("The number %s is not a palindrome.%n", s);
        }
    }
}
