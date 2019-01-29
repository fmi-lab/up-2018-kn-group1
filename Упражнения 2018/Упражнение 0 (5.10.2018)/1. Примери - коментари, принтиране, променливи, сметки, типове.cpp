#include<iostream>
#include<cmath>
using namespace std;

int main() {
    // Comment

    /* Comment
       on
       many
       lines */

    cout << "Hello, FMI!";
    cout << endl;               // This prints a new-line symbol

    cout << 2017 + 1;           // This prints: 2018
    cout << "2017 + 1";         // This prints: 2017 + 1

    int a;
    a = 21;                     // The value of a becomes 21
    cout << a;                  // This prints: 21

    a = 42;
    cout << a;                  // This prints: 42

    int m;
    m = a;                      // The value of m becomes 42

    int c = 6;                  // c is created and its value becomes 6


    // Maths:
    
    a = (1 + 2) * 7 - 4;    // The value of a becomes 17
    a = 17 / 3;             // The value of a becomes 5     (Division with no remainder)
    a = 17 % 3;             // The value of a becomes 2     (Remainder from division)

    
    // Types:

    int number;         // Whole number
    double d;           // Real number
    char sym;           // Symbol
    bool b;             // Logical


    // Real numbers:

    d = 2019;
    d = d / 2;          // d becomes 1009.5
    d = 2019 / 2;       // d becomes 1009 on this line!


    // Symbols;

    sym = 'a';          // Small letter
    sym = 'B';          // Big letter
    sym = '4';          // Digit
    sym = '?';          // Another symbol
    sym = '/';          // The symbol /
    sym = 'n';          // The letter n
    sym = '\n';         // New-line symbol
    sym = '\0';         // Another special symbol
    sym = '\\';         // The symbol \


    // bool-s have only 2 possible values
    b = true;
    b = false;

    system("pause");
    return 0;
}