/*
CONDITIONAL STATEMENTS IN C
This file demonstrates conditional statements in C:
- if statement
- if-else statement
- else-if ladder
- nested if
- switch case statement
*/

#include <stdio.h>

int main() {
    int num = 10;
    
    // Simple if statement
    if (num > 0) {
        printf("%d is positive\n\n", num);
    }
    
    // if-else statement
    if (num % 2 == 0) {
        printf("%d is even\n\n", num);
    } else {
        printf("%d is odd\n\n", num);
    }
    
    // else-if ladder
    int marks = 75;
    printf("Grade: ");
    if (marks >= 90) {
        printf("A\n\n");
    } else if (marks >= 80) {
        printf("B\n\n");
    } else if (marks >= 70) {
        printf("C\n\n");
    } else if (marks >= 60) {
        printf("D\n\n");
    } else {
        printf("F\n\n");
    }
    
    // Nested if
    int age = 25;
    if (age >= 18) {
        if (age <= 60) {
            printf("You are eligible to work\n\n");
        } else {
            printf("You are too old to work\n\n");
        }
    } else {
        printf("You are too young to work\n\n");
    }
    
    // Switch case
    char grade = 'B';
    printf("Grade comments: ");
    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("You can do better\n");
            break;
        case 'D':
            printf("Needs improvement\n");
            break;
        case 'F':
            printf("Failed\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    
    return 0;
}