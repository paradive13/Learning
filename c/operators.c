/*
OPERATORS IN C
This file demonstrates various types of operators in C programming:
- Arithmetic operators
- Relational operators
- Logical operators
- Assignment operators
- Bitwise operators
- Ternary operator
*/

#include <stdio.h>

int main() {
    // Arithmetic operators
    int a = 10, b = 5;
    printf("Arithmetic Operators:\n");
    printf("%d + %d = %d\n", a, b, a + b); // Addition
    printf("%d - %d = %d\n", a, b, a - b); // Subtraction
    printf("%d * %d = %d\n", a, b, a * b); // Multiplication
    printf("%d / %d = %d\n", a, b, a / b); // Division
    printf("%d %% %d = %d\n\n", a, b, a % b); // Modulus
    
    // Relational operators
    printf("Relational Operators:\n");
    printf("%d == %d is %d\n", a, b, a == b);
    printf("%d != %d is %d\n", a, b, a != b);
    printf("%d > %d is %d\n", a, b, a > b);
    printf("%d < %d is %d\n", a, b, a < b);
    printf("%d >= %d is %d\n", a, b, a >= b);
    printf("%d <= %d is %d\n\n", a, b, a <= b);
    
    // Logical operators
    int x = 1, y = 0;
    printf("Logical Operators:\n");
    printf("%d && %d is %d\n", x, y, x && y);
    printf("%d || %d is %d\n", x, y, x || y);
    printf("!%d is %d\n\n", x, !x);
    
    // Assignment operators
    printf("Assignment Operators:\n");
    int c = a; // Simple assignment
    c += b; printf("c += b is %d\n", c);
    c -= b; printf("c -= b is %d\n", c);
    c *= b; printf("c *= b is %d\n", c);
    c /= b; printf("c /= b is %d\n", c);
    c %= b; printf("c %%= b is %d\n\n", c);
    
    // Bitwise operators
    printf("Bitwise Operators:\n");
    printf("%d & %d is %d\n", a, b, a & b);  // AND
    printf("%d | %d is %d\n", a, b, a | b);  // OR
    printf("%d ^ %d is %d\n", a, b, a ^ b);  // XOR
    printf("~%d is %d\n", a, ~a);           // NOT
    printf("%d << 1 is %d\n", a, a << 1);   // Left shift
    printf("%d >> 1 is %d\n\n", a, a >> 1); // Right shift
    
    // Ternary operator
    printf("Ternary Operator:\n");
    int max = (a > b) ? a : b;
    printf("Maximum between %d and %d is %d\n", a, b, max);
    
    return 0;
}