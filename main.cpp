#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
    cout << "Program made by Roba Abbajabal, 2018" << endl;

    // Prompts user for a value.
    int decimalValue;
    cout << "Enter decimal value of char to print:";
    cin >> decimalValue;

    // Now print that value back out as a character.
    char characterValue = (char)decimalValue;
    cout << "The char you entered was [" << characterValue << "]" << endl;

    // Wait for user to be ready to terminate the program.
    system("PAUSE");
    return 0;
}