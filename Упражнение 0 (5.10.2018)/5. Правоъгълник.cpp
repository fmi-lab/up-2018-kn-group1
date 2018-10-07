#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    if (a <= 0 || b <= 0) {
        cout << "There is no such rectangle!";
        cout << endl;
    }
    else {
        int p = 2 * (a + b);
        int s = a * b;

        cout << "Perimeter: ";
        cout << p;
        cout << endl;

        cout << "Area: " << s << endl;      // This is a short way to print more than 1 thing
    }

    system("pause");
    return 0;
}