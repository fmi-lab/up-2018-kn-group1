#include<iostream>
using namespace std;

int main() {

    double x, y;
    cin >> x >> y;

    if (x*x + y*y <= 12*12) {
        cout << "In" << endl;
    }
    else {
        cout << "Out" << endl;
    }

    system("pause");
    return 0;
}