//This program performs a variety of calculation on two positive numbers
// using their associated arithmetic operators.

#include <iostream>
using namespace std;

int main ()
{
    int num1 = 0;
    int num2 = 0;
    int resultOfAddition;
    int resultOfSubtraction;
    int resultOfMultiplication;
    double resultOfDivision;
    int resultOfModulus;
    int resultOfIntegerDivision;

    cout << "Please enter two positive integers, separated by a space: ";
    cin >> num1 >> num2;

    resultOfAddition = num1 + num2;
    resultOfSubtraction = num1 - num2;
    resultOfMultiplication = num1 * num2;
    resultOfDivision = static_cast<float>(num1) / static_cast<float>(num2);
    resultOfModulus = num1 % num2;
    resultOfIntegerDivision = num1 / num2;

    cout << num1 << " + " << num2 << " = " << resultOfAddition << endl;
    cout << num1 << " - " << num2 << " = " << resultOfSubtraction << endl;
    cout << num1 << " * " << num2 << " = " << resultOfMultiplication << endl;
    cout << num1 << " / " << num2 << " = " << resultOfDivision << endl;
    cout << num1 << " div " << num2 << " = " << resultOfIntegerDivision << endl;
    cout << num1 << " mod " << num2 << " = " << resultOfModulus << endl;

    return 0;
}