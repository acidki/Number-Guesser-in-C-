#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;  
    int guess;
    int attempts = 0;

    cout << "-----------------------------------------Welcome to the Number Guessing Game!--------------------------------------------------\n";
    cout << "Are you ready? let's begin!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a valid number.\n";
            continue;
        }

        attempts++;

        if (guess > secret) {
            cout << "Too high!\n";
        } else if (guess < secret) {
            cout << "Too low!\n";
        } else {
            cout << "Dayumn! Congrats! You guessed the number " << secret
                 << " in " << attempts << " attempts.\n";
        }
    } while (guess != secret);

    return 0;
}