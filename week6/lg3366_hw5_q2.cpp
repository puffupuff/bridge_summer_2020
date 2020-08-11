// This program implements a number guessing game!

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {

    int rando = 0;
    int guessCount, guessesLeft, guess;
    int lowRange, highRange;
    bool guessedCorrectly;
    const int MAXIMUM_NUMBER_OF_GUESSES = 5;

    srand(time(0)); // Create the seed for the random number generator
    rando = ((rand() % 100) + 1); // Choose a random number between 1-100, inclusive

    guessCount = 0;
    guessesLeft = MAXIMUM_NUMBER_OF_GUESSES;
    guessedCorrectly = false;
    lowRange = 1;
    highRange = 100;

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;

    // If the user has not yet guessed the number correctly or they have some guesses left
    while ( (guessesLeft > 0) && (guessedCorrectly == false) ) {
        cout << "Range: [" << lowRange << "," << highRange << "], Number of guesses left: " << guessesLeft << endl;
        cout << "Your guess: ";
        cin >> guess;
        guessCount++;

        // While the user has guesses left, use an if statement to control the range of guesses.
        if (guessCount < MAXIMUM_NUMBER_OF_GUESSES) {
            if (guess != rando && guess < rando) {
                if(guess >= lowRange){ // Only update the range if the user's current guess falls within the current range
                    lowRange = guess + 1;
                } else {
                    // Do nothing. Keep the range constant even if guess is out-of-bounds
                }
                cout << "Wrong! My number is bigger." << endl << endl;
                guessesLeft--;
            } else if (guess != rando && guess > rando) {
                if(guess <= highRange){ // Only update the range if the user's current guess falls within the current range
                    highRange = guess - 1;
                } else {
                    // Do nothing. Keep the range constant even if guess is out-of-bounds
                }
                cout << "Wrong! My number is smaller." << endl << endl;
                guessesLeft--;
            } else if (guess == rando) {
                guessedCorrectly = true;
                cout << "Congrats! You guessed my number in " << guessCount << " guesses." << endl;
            }
        } else {
            guessesLeft--;
            if(guess != rando) {
                cout << "Out of guesses! My number is " << rando;
            } else { // It is possible to guess on the last try.
                cout << "Congrats! You guessed my number in " << guessCount << " guesses." << endl;
            }
        }
    } // Input should stop!
    //return 0;
}
