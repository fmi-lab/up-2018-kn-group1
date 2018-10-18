#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    if ((n % 3 == 0) && (n % 5 == 0)) {
        cout << "n se deli na 3 i 5." << endl;
    }
    else {
        cout << "n NE se deli na 3 i 5." << endl;
    }

    system("pause");
    return 0;
}