// This program prints a nxn multiplication table.

#include <iostream>
using namespace std;

int main() {

    int tableSize = 0;
    cout << "Please enter a positive integer: " << endl;
    cin >> tableSize;

    for(int tableWidth = 1; tableWidth <= tableSize; tableWidth++){
        for(int tableHeight = 1; tableHeight <= tableSize ; tableHeight++){
            cout << tableWidth * tableHeight << "\t";
        }
        cout << endl;
    }
    return 0;
}
