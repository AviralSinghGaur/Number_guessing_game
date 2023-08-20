#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int userGuess;
    int numberOfGuesses = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;

    do {
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> userGuess;
        numberOfGuesses++;

        if (userGuess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << numberOfGuesses << " guesses." << std::endl;
        }
    } while (userGuess != secretNumber);

    return 0;
}
