#include<iostream>
using namespace std;

int main() {
    int n = 5;          // Change this 5 and run again to see what happens

    if (n < 3) {
        cout << "Not passing.";
    }

    if (n >= 3) {
        cout << "Passing.";
    }

    if (n == 6) {
        cout << "Excellent!";
    }

    system("pause");
    return 0;
}