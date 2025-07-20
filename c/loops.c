/*
LOOPS IN C
This file demonstrates loop statements in C:
- for loop
- while loop
- do-while loop
- nested loops
*/

#include <stdio.h>

int main() {
    // for loop
    printf("for loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // while loop
    printf("while loop:\n");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n\n");
    
    // do-while loop
    printf("do-while loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n\n");
    
    // Nested loops
    printf("Nested loops (pattern):\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= row; col++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    
    // break and continue
    printf("Loop with break and continue:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 3) continue; // Skip 3
        if (i == 8) break;    // Exit at 8
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}