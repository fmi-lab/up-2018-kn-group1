#include<iostream>
using namespace std;

int main() {
    double grade;
    double sum = 0;
    int count = 0;

    cin >> grade;

    while (2 <= grade && grade <= 6) {
        sum = sum + grade;
        count++;
        cin >> grade;
    }
    
    if (count == 0) {
        cout << "There are no grades" << endl;
    }
    else {
        cout << "Average: " << sum / count << endl;
    }
    
    return 0;
}
