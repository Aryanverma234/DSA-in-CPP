// Striver DSA A2Z Sheet
// Pattern 01 - Rectangular Star Pattern

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}