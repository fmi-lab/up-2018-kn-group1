#include<iostream>
using namespace std;

int main() {
    int n;
    char sym;
    cin >> n;

    int digits = 0;

    for (int i = 0; i < n; i++) {
        cin >> sym;
        if ('0' <= sym && sym <= '9') {
            digits++;
        }
    }

    cout << "Digits: " << digits << endl;

    return 0;
}
