#include<iostream>
using namespace std;

int main() {
    char sym;
    cin >> sym;

    if ('A' <= sym && sym <= 'Z') {
        char sym1 = sym + 32;
        cout << sym1 << endl;
    }

    return 0;
}
