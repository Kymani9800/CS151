
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess;
    int tries = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    cout << "This program allows you to play a guessing game." << endl;
    cout << endl;

    cout << "I will think of a number between 1 and 100 and will allow you to guess until you get it." << endl;
    cout << "For each guess, I will tell you whether the right answer is higher or lower than your guess." << endl;
    cout << endl;

    cout << "I am thinking of a number between 1 and 100..." << endl;
    cout << endl;

    do {
        cout << "Your guess? ";
        cin >> guess;

        tries++;

        if (guess > number) {
            cout << endl;
            cout << "It's lower." << endl;
            cout << endl;
        }
        else if (guess < number) {
            cout << endl;
            cout << "It's higher." << endl;
            cout << endl;
        }
        else {
            cout << endl;
            cout << "You got it right in " << tries << " guesses." << endl;
        }

    } while (guess != number);

    return 0;
}
