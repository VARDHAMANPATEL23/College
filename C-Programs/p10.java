import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class ExceptionDemo {

    public static void main(String[] args) {

        // 1. Checked Exception (FileNotFoundException)
        try {
            File file = new File("nonexistentfile.txt");
            FileReader fr = new FileReader(file);  // This will throw FileNotFoundException
        } catch (FileNotFoundException e) {
            System.out.println("Checked Exception caught: File not found");
        }

        // 2. Unchecked Exception (ArithmeticException)
        try {
            int result = 10 / 0;  // This will throw ArithmeticException
        } catch (ArithmeticException e) {
            System.out.println("Unchecked Exception caught: Cannot divide by zero");
        }

        // 3. Unchecked Exception (NullPointerException)
        try {
            String str = null;
            str.length();  // This will throw NullPointerException
        } catch (NullPointerException e) {
            System.out.println("Unchecked Exception caught: Null reference");
        }

        // 4. Unchecked Exception (ArrayIndexOutOfBoundsException)
        try {
            int[] arr = new int[5];
            arr[10] = 100;  // This will throw ArrayIndexOutOfBoundsException
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Unchecked Exception caught: Array index out of bounds");
        }

        // 5. Unchecked Exception (NumberFormatException)
        try {
            String number = "abc";
            int num = Integer.parseInt(number);  // This will throw NumberFormatException
        } catch (NumberFormatException e) {
            System.out.println("Unchecked Exception caught: Invalid number format");
        }

        // 6. Checked Exception (InterruptedException)
        try {
            Thread.sleep(1000);  // This can throw InterruptedException
        } catch (InterruptedException e) {
            System.out.println("Checked Exception caught: Thread interrupted");
        }

        // 7. Error (OutOfMemoryError)
        try {
            int[] largeArray = new int[Integer.MAX_VALUE];  // This will likely throw OutOfMemoryError
        } catch (OutOfMemoryError e) {
            System.out.println("Error caught: Out of memory");
        }

        // 8. Error (StackOverflowError)
        try {
            recursiveMethod();  // This will throw StackOverflowError
        } catch (StackOverflowError e) {
            System.out.println("Error caught: Stack overflow");
        }

        // 9. Finally block (resource cleanup)
        Scanner sc = null;
        try {
            sc = new Scanner(new File("nonexistentfile.txt"));  // FileNotFoundException
        } catch (FileNotFoundException e) {
            System.out.println("Checked Exception caught in finally: File not found");
        } finally {
            if (sc != null) {
                sc.close();  // Ensure the resource is closed
                System.out.println("Scanner closed");
            } else {
                System.out.println("Scanner was never opened");
            }
        }
    }

    // Method to demonstrate StackOverflowError
    public static void recursiveMethod() {
        recursiveMethod();  // Infinite recursion causes StackOverflowError
    }
}