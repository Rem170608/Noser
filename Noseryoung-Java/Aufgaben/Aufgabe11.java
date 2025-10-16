import java.util.Scanner;

public class Aufgabe11 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Datum eingeben (DD.MM.YYYY): ");
        String dateString = input.nextLine();
        
        String[] dateParts = dateString.split("\\.");
        if (dateParts.length != 3) {
            System.out.println("Ungültiges Format! Bitte verwenden Sie DD.MM.YYYY.");
            input.close();
            return;
        }
        
        int day = Integer.parseInt(dateParts[0]);
        int month = Integer.parseInt(dateParts[1]);
        int year = Integer.parseInt(dateParts[2]);
        
        // Check if the date is valid
        if (!isValidDate(day, month, year)) {
            System.out.println("Ungültiges Datum! Bitte überprüfen Sie Tag, Monat und Jahr.");
            input.close();
            return;
        }
        
        String dayOfWeek = calculateDayOfWeek(day, month, year);
        System.out.println("Der Wochentag ist: " + dayOfWeek);
        
        input.close();
    }
    
    public static String calculateDayOfWeek(int day, int month, int year) {
        // Month values according to the specification
        int[] monthValues = {1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};
        String[] weekDays = {"Sa", "So", "Mo", "Di", "Mi", "Do", "Fr"};
        
        // Step 1: Last two digits of year + quarter of that
        int lastTwoDigits = year % 100;
        int total = lastTwoDigits + (lastTwoDigits / 4);
        
        // Step 2: Add month value
        total += monthValues[month - 1];
        
        // Step 3: Add day
        total += day;
        
        // Step 4: Add century value
        int century = year / 100;
        int centuryValue;
        if (century == 18) {
            centuryValue = 2;
        } else if (century == 19) {
            centuryValue = 0;
        } else if (century == 20) {
            centuryValue = 6;
        } else if (century == 21) {
            centuryValue = 4;
        } else {
            // For other centuries, use modulo pattern
            centuryValue = (3 - (century % 4)) * 2 % 7;
        }
        total += centuryValue;
        
        // Step 5: Adjust for leap year in January or February
        if (isLeapYear(year) && (month == 1 || month == 2)) {
            total -= 1;
        }
        
        // Step 6: Modulo 7 to get the day of week
        return weekDays[total % 7];
    }
    
    public static boolean isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
    
    public static boolean isValidDate(int day, int month, int year) {
        if (month < 1 || month > 12 || day < 1) return false;
        
        int daysInMonth;
        if (month == 2) {
            daysInMonth = isLeapYear(year) ? 29 : 28;
        } else {
            daysInMonth = (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;
        }
        
        return day <= daysInMonth;
    }
}