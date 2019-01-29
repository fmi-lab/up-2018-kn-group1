#include<iostream>
using namespace std;

int main() {
    
    char sym;
    cout << "Symbol: ";
    cin >> sym;

    if (sym == 'S') {
        double a;
        cout << "a: "; cin >> a;            // Sometimes it is OK to write two ';' on one line
        cout << "Area: " << a*a << endl;
    }
    else if (sym == 'C') {
        double pi = 3.14;
        double r;
        cout << "r: "; cin >> r;
        cout << "Area: " << pi*r*r << endl;
    }
    else if (sym == 'R') {
        double a, b;
        cout << "a: "; cin >> a;
        cout << "b: "; cin >> b;
        cout << "Area: " << a*b << endl;
    }
    else if (sym == 'T') {
        double a, b, h;
        cout << "a: "; cin >> a;
        cout << "b: "; cin >> b;
        cout << "h: "; cin >> h;
        cout << "Area: " << (a+b)*h/2 << endl;
    }
    else if (sym == '3') {
        double a, h;
        cout << "a: "; cin >> a;
        cout << "h: "; cin >> h;
        cout << "Area: " << a*h/2 << endl;
    }

    system("pause");
    return 0;
}