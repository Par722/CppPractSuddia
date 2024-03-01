#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 21;
    int guess;
    int attempts = 0;

    cout << "Guess the number from 0 to 20" << endl;

    while (true) {
        cout << "Enter a number: ";
        cin >> guess;

        if (guess < 0 || guess > 20) {
            cout << "Invalid value!!!" << endl;
            continue;
        }

        attempts++;

        if (guess < secretNumber) {
            cout << "The proposed number is SMALLER than intended" << endl;
        }
        else if (guess > secretNumber) {
            cout << "The proposed number is BIGGER than intended" << endl;
        }
        else {
            cout << "You guessed the number with [" << attempts << "] attemps" << endl;
            break;
        }
    }

    return 0;
}