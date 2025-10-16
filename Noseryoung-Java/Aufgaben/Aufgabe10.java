import java.util.Scanner;

public class Aufgabe10{

    public static int computeHourHandAngle(int H, int M) {
        return (int) ((0.5 * (60 * H + M)) % 360);
    }

    public static int computeMinuteHandAngle(int M) {
        return (6 * M) % 360;
    }

    public static void main(String[] args) {

        int H;
        int M;

        Scanner input = new Scanner(System.in);
        System.out.print("Enter Hour (HH): ");
        H = input.nextInt();
        System.out.print("Enter Minute (MM): ");
        M = input.nextInt();
        input.close();

        int hour1 = H, minute1 = M;
        System.out.println( hour1 +":"+ minute1 +" Uhr: ");
        System.out.println("Stundenzeiger bei " + computeHourHandAngle(hour1, minute1) + "°");
        System.out.println("Minutenzeiger bei " + computeMinuteHandAngle(minute1) + "°");
    }
}
