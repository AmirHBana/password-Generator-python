// Include necessary libraries
#include <iostream>
#include <string>
#include <random>

// Define the characters that can be included in the password
const std::string characters = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

// Function to generate a random password
std::string passwordGenerator(int length = 16) {
    // Create a random number generator
    std::random_device rd;
    // Initialize the generator with a random seed
    std::mt19937 gen(rd());
    // Create a uniform integer distribution between 0 and the length of the characters string
    std::uniform_int_distribution<> dis(0, characters.length() - 1);

    // Initialize an empty password string
    std::string password;
    // Generate the password by selecting a random character from the characters string
    for (int i = 0; i < length; i++) {
        int randomIndex = dis(gen);
        password += characters[randomIndex];
    }
    // Return the generated password
    return password;
}

// Function to run the program
int main() {
    // Generate a random password and print it
    std::cout << passwordGenerator() << std::endl;
    // Return 0 to indicate successful execution
    return 0;
}
