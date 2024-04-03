// Import necessary libraries
import java.util.Random;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

// Define the characters that can be included in the password
public class PasswordGenerator {
    private static final String characters = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // Function to generate a random password
    public static String passwordGenerator(int length) {
        // Create a random number generator
        Random random = new Random();
        // Generate the password by selecting a random character from the characters string
        return IntStream.generate(() -> random.nextInt(characters.length()))
                .limit(length)
                .mapToObj(i -> characters.charAt(i))
                .map(Object::toString)
                .collect(Collectors.joining());
    }

    // Function to generate a random password with a default length of 16
    public static String passwordGenerator() {
        return passwordGenerator(16);
    }

    // Function to run the program
    public static void main(String[] args) {
        // Generate a random password and print it
        System.out.println(passwordGenerator());
    }
}
