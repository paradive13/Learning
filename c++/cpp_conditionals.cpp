/*
C++ CONDITIONAL STATEMENTS
This file demonstrates conditional statements in C++:
- if statement
- if-else statement
- else-if ladder
- nested if
- switch case statement
*/

#include <iostream>
using namespace std;

int main() {
    int num = 10;
    
    // Simple if statement
    if (num > 0) {
        cout << num << " is positive" << endl << endl;
    }
    
    // if-else statement
    if (num % 2 == 0) {
        cout << num << " is even" << endl << endl;
    } else {
        cout << num << " is odd" << endl << endl;
    }
    
    // else-if ladder
    int marks = 75;
    cout << "Grade: ";
    if (marks >= 90) {
        cout << "A" << endl << endl;
    } else if (marks >= 80) {
        cout << "B" << endl << endl;
    } else if (marks >= 70) {
        cout << "C" << endl << endl;
    } else if (marks >= 60) {
        cout << "D" << endl << endl;
    } else {
        cout << "F" << endl << endl;
    }
    
    // Nested if
    int age = 25;
    if (age >= 18) {
        if (age <= 60) {
            cout << "You are eligible to work" << endl << endl;
        } else {
            cout << "You are too old to work" << endl << endl;
        }
    } else {
        cout << "You are too young to work" << endl << endl;
    }
    
    // Switch case
    char grade = 'B';
    cout << "Grade comments: ";
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "You can do better" << endl;
            break;
        case 'D':
            cout << "Needs improvement" << endl;
            break;
        case 'F':
            cout << "Failed" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }
    
    return 0;
}