#include<iostream>
using namespace std;

int main() {

    int a, b, c, d, n;

    cin >> n;
    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 100) % 10;
    d = n / 1000;

    if (a == b || a == c || a == d || b == c || b == d || c == d) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    system("pause");
    return 0;
}