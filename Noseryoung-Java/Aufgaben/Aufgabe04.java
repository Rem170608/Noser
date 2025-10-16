import java.util.Scanner;

public class Aufgabe04 {

    public static void main(String[] args) {

        double D;
        double L;

        Scanner input = new Scanner(System.in);

        System.out.print("Enter the diameter (in cm): ");
        D = input.nextDouble();
        System.out.print("Enter the height (in m): ");
        L = input.nextDouble();
        input.close();

        double D_m = D / 100.0;
        double volume = (Math.PI / 4.0) * (D_m * D_m) * L;
        System.out.printf("The tree has a volume of %.3f m^3\n", volume);
    }
}
