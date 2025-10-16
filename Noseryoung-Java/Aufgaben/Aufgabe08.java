import java.util.Scanner;

public class Aufgabe08 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Gender (m/f): ");
        char gender = input.next().trim().toLowerCase().charAt(0);
        System.out.print("Chest circumference (cm): ");
        int chest = input.nextInt();
        System.out.print("Height (cm): ");
        int height = input.nextInt();
        input.close();
        int finalSize = computeGarmentSize(gender, chest, height);
        System.out.printf("Clothing size: %d\n", finalSize);
    }

    public static int computeGarmentSize(char gender, int chest, int height) {
        int baseSize = chest / 2;
        if (gender == 'f' || gender == 'F') {
            baseSize -= 6;
            if (height < 164) {
                return baseSize / 2;
            } else if (height <= 170) {
                return baseSize;
            } else {
                return baseSize * 2;
            }
        } 
        if (gender == 'm' || gender == 'M') {
            if (height < 176) {
                return baseSize - 2;
            } else if (height > 184) {
                return baseSize + 2;
            }
            return baseSize;
        }
        return -1;
    }
}
