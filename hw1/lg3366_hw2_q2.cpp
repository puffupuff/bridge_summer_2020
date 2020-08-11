// This program converts dollars and cents into
//quarters, dimes, nickels, and pennies.

#include <iostream>
using namespace std;

static const int CENTS_IN_DOLLAR = 100;
static const int CENTS_IN_QUARTER = 25;
static const int CENTS_IN_DIME = 10;
static const int CENTS_IN_NICKEL = 5;


int main() {
    int amountInDollars;
    int amountInCents;
    int totalAmountInCents;
    int amountInQuarters;
    int amountInDimes;
    int amountInNickels;
    int amountInPennies;

    cout << "Please enter your amount in the form of dollars and cents separated by a space: ";
    cin >> amountInDollars >> amountInCents;

    //Convert entered amount into cents
    totalAmountInCents = (amountInDollars * CENTS_IN_DOLLAR) + amountInCents;

    //Determine amounts of quarters, dimes, nickels, and pennies from above cent amount
    amountInQuarters = totalAmountInCents / CENTS_IN_QUARTER;
    amountInDimes = (totalAmountInCents - (amountInQuarters * CENTS_IN_QUARTER)) / CENTS_IN_DIME;
    amountInNickels = (totalAmountInCents - (amountInQuarters * CENTS_IN_QUARTER) - (amountInDimes * CENTS_IN_DIME)) /
                      CENTS_IN_NICKEL;
    amountInPennies = totalAmountInCents - (amountInQuarters * CENTS_IN_QUARTER) - (amountInDimes * CENTS_IN_DIME) -
                      (amountInNickels * CENTS_IN_NICKEL);

    cout << amountInDollars << " dollars and " << amountInCents << " cents are: " << amountInQuarters << " quarters, "
         << amountInDimes << " dimes, " << amountInNickels << " nickels and " << amountInPennies << " pennies";

    return 0;
}