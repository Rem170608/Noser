public class Aufgabe06 {
	public static void main(String[] args) {
		for (int i = 0; i <= 9999; i++) {
			System.out.printf("%04d", i);
			if (i < 9999) System.out.println(" ");
		}
		System.out.println();
	}
}
