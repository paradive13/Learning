/*
C++ OPERATORS
This file demonstrates various types of operators in C++:
- Arithmetic operators
- Relational operators
- Logical operators
- Assignment operators
- Bitwise operators
*/

#include <iostream>
using namespace std;

int main() {
    // Arithmetic operators
    int a = 10, b = 5;
    cout << "Arithmetic Operators:" << endl;
    cout << a << " + " << b << " = " << a + b << endl; // Addition
    cout << a << " - " << b << " = " << a - b << endl; // Subtraction
    cout << a << " * " << b << " = " << a * b << endl; // Multiplication
    cout << a << " / " << b << " = " << a / b << endl; // Division
    cout << a << " % " << b << " = " << a % b << endl << endl; // Modulus
    
    // Relational operators
    cout << "Relational Operators:" << endl;
    cout << a << " == " << b << " is " << (a == b) << endl;
    cout << a << " != " << b << " is " << (a != b) << endl;
    cout << a << " > " << b << " is " << (a > b) << endl;
    cout << a << " < " << b << " is " << (a < b) << endl;
    cout << a << " >= " << b << " is " << (a >= b) << endl;
    cout << a << " <= " << b << " is " << (a <= b) << endl << endl;
    
    // Logical operators
    bool x = true, y = false;
    cout << "Logical Operators:" << endl;
    cout << x << " && " << y << " is " << (x && y) << endl;
    cout << x << " || " << y << " is " << (x || y) << endl;
    cout << "!" << x << " is " << !x << endl << endl;
    
    // Assignment operators
    cout << "Assignment Operators:" << endl;
    int c = a; // Simple assignment
    c += b; cout << "c += b is " << c << endl;
    c -= b; cout << "c -= b is " << c << endl;
    c *= b; cout << "c *= b is " << c << endl;
    c /= b; cout << "c /= b is " << c << endl;
    c %= b; cout << "c %= b is " << c << endl << endl;
    
    // Bitwise operators
    cout << "Bitwise Operators:" << endl;
    cout << a << " & " << b << " is " << (a & b) << endl;  // AND
    cout << a << " | " << b << " is " << (a | b) << endl;  // OR
    cout << a << " ^ " << b << " is " << (a ^ b) << endl;  // XOR
    cout << "~" << a << " is " << (~a) << endl;           // NOT
    cout << a << " << 1 is " << (a << 1) << endl;         // Left shift
    cout << a << " >> 1 is " << (a >> 1) << endl << endl; // Right shift
    
    return 0;
}