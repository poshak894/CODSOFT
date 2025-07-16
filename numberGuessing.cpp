#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(std::time(nullptr)));
    int target = std::rand() % 100 + 1;
    int attempt;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I've picked a number between 1 and 100. Try to guess it:\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> attempt;

        if (attempt < target) {
            cout << "Too low. Try again.\n";
        } else if (attempt > target) {
            cout << "Too high. Try again.\n";
        } else {
            cout << "Nice! You guessed it right.\n";
            break;
        }
    }

    return 0;
}