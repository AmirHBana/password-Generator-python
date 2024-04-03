// Define the characters that can be included in the password
const characters = '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';

// Function to generate a random password
function passwordGenerator(length = 16) {
    let password = '';

    // Generate the password by selecting a random character from the characters string
    for (let i = 0; i < length; i++) {
        const randomIndex = Math.floor(Math.random() * characters.length);
        password += characters[randomIndex];
    }

    // Return the generated password
    return password;
}

// Function to run the program
function main() {
    // Generate a random password and print it
    console.log(passwordGenerator());
}

main();
