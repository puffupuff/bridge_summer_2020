// This program asks the user to enter a number of quarters, dimes, nickels, and pennies.
// It outputs the monetary value of the coins in the format of dollars and remaining cents.

#include <iostream>
using namespace std;

static const int CENTS_IN_DOLLAR = 100;
static const int CENTS_IN_QUARTER = 25;
static const int CENTS_IN_DIME = 10;
static const int CENTS_IN_NICKEL = 5;


int main (){
    int numberOfDollars;
    int numberOfQuarters;
    int numberOfDimes;
    int numberOfNickels;
    int numberOfPennies;
    int totalInCents;

    int quartersToCents;
    int dimesToCents;
    int nickelsToCents;

    int leftoverCents; //cents remaining once dollars are removed from amount

    cout << "Please enter number of coins: " << endl;
    cout << "# of quarters: ";
    cin >> numberOfQuarters;

    cout << "# of dimes: ";
    cin >> numberOfDimes;

    cout << "# of nickels: ";
    cin >> numberOfNickels;

    cout << "# of pennies: ";
    cin >> numberOfPennies;

    //Convert all amounts to cents and calculate the total
    quartersToCents = numberOfQuarters * CENTS_IN_QUARTER;
    dimesToCents = numberOfDimes * CENTS_IN_DIME;
    nickelsToCents = numberOfNickels * CENTS_IN_NICKEL;
    totalInCents = quartersToCents + dimesToCents + nickelsToCents + numberOfPennies;

    //Express the total in terms of dollars and cents
    numberOfDollars = totalInCents / CENTS_IN_DOLLAR;
    leftoverCents = totalInCents % CENTS_IN_DOLLAR;
    cout << "The total is " << numberOfDollars << " dollars and " << leftoverCents << " cents" << endl;

    return 0;
}
