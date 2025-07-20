/*
C++ LOOPS
This file demonstrates loop statements in C++:
- for loop
- while loop
- do-while loop
- nested loops
- range-based for loop (C++11)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // for loop
    cout << "for loop:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl << endl;
    
    // while loop
    cout << "while loop:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl << endl;
    
    // do-while loop
    cout << "do-while loop:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl << endl;
    
    // Nested loops
    cout << "Nested loops (pattern):" << endl;
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    
    // break and continue
    cout << "Loop with break and continue:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 3) continue; // Skip 3
        if (i == 8) break;    // Exit at 8
        cout << i << " ";
    }
    cout << endl;
    
    // Range-based for loop (C++11)
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "\nRange-based for loop:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}