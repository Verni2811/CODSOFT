#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    // Generate any number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "Try to guess the number between 1 and 100.\n\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        // Check if the guess is correct
        if (userGuess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number in " << attempts + 1 << " attempts.\n";
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Too high! Try again.\n";
        }

        attempts++;

    } while (userGuess != secretNumber);

    return 0;
}
