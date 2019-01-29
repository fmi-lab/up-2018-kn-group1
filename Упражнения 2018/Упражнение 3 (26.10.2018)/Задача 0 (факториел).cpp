#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int fac = 1;

    for (int i = 2; i <= n; i++) {
        fac = fac * i;
    }

    cout << n << "! = " << fac << endl;

    return 0;
}
