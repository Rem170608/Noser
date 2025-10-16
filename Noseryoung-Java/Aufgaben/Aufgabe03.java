import java.text.DecimalFormat;
import java.util.Scanner;

public class Aufgabe03 {
    public static void main(String[] args) {
        int W = 0; // weight in kg
        int H = 0; // height in cm
        int A = 0; // age in years
        char G = ' '; // Gender M/m, F/f and other

        Scanner input = new Scanner(System.in);

        System.out.print("Enter your age: ");
        A = input.nextInt();
        System.out.print("Enter your Height (in cm): ");
        H = input.nextInt();
        System.out.print("Enter your Weight (in KG): ");
        W = input.nextInt();
        System.out.print("Enter your Gender (M/m = Male, F/f = Female, other = both): ");
        String gInput = input.next();
        G = gInput.charAt(0);
        input.close();


        DecimalFormat df = new DecimalFormat("#0.000");

        if (G == 'm' || G == 'M') {
            double bmr = 66.47 + 13.7 * W + 5 * H - 6.8 * A;
            System.out.println("Gender: Male");
            System.out.println("Basal Metabolic Rate (BMR): " + df.format(bmr) + " kcal/day");
        } else if (G == 'f' || G == 'F') {
            double bmr = 655.1 + 9.6 * W + 1.8 * H - 4.7 * A;
            System.out.println("Gender: Female");
            System.out.println("Basal Metabolic Rate (BMR): " + df.format(bmr) + " kcal/day");
        } else {
            double bmrMale = 66.47 + 13.7 * W + 5 * H - 6.8 * A;
            double bmrFemale = 655.1 + 9.6 * W + 1.8 * H - 4.7 * A;
            System.out.println("Gender: Other/Not specified");
            System.out.println("BMR (male formula): " + df.format(bmrMale) + " kcal/day");
            System.out.println("BMR (female formula): " + df.format(bmrFemale) + " kcal/day");
        }
    }
}
