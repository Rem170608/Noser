public class Aufgabe02 {
    public static void main(String[] args) {
        for(int  i = 0; i < 53; i++ ){
            for (int j = 0; j < 56 - i; j++)
                System.out.print(" ");
                for (int k = 0; k < (2 * i + 1); k++)
                    System.out.print("*");
                    System.out.print("\n");
        }           
        for (int p = 0; p < 5; p++) {
            for (int s = 0; s < 46; s++) {
                System.out.print(" ");
            }
            System.out.println("******************");

        }
        System.out.println("\n\n");
    }
}
