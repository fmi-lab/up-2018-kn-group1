#include<iostream>
#include<cmath>
using namespace std;

int main() {

    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a == 0) {
        cout << "Error!";
        cout << endl;
    }

    else {
        double d = b*b - 4*a*c;
        
        if (d < 0) {
            cout << "No solution.";
            cout << endl;
        }
        else {
            if (d == 0) {
                double x = -b / (2*a);
                cout << "x = ";
                cout << x;
                cout << endl;
            }
            else {
                double x1 = (-b + sqrt(d)) / (2*a);
                double x2 = (-b - sqrt(d)) / (2*a);

                cout << "x1 = ";
                cout << x1;
                cout << endl;

                cout << "x2 = ";
                cout << x2;
                cout << endl;
            }
        }
    }

    system("pause");
    return 0;
}