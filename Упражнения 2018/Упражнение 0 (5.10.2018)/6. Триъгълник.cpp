#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Error! Some of the sides are negative or 0.";
        cout << endl;
        return 0;
    }

    if (a+b > c && b+c > a && a+c > b) {
        double p = (a + b + c) / 2;
        double s = sqrt( p * (p-a) * (p-b) * (p-c) );
        cout << "Area: ";
        cout << s;
        cout << endl;
    }
    else {
        cout << "Error! There is no such triangle.";
        cout << endl;
    }

    system("pause");
    return 0;
}