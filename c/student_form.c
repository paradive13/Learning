/*
STUDENT INFORMATION FORM
This program demonstrates:
- Structures
- Pointers
- String handling
- User input
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
    char grade;
};

int main() {
    struct Student s1;
    struct Student *ptr = &s1;
    
    printf("Enter student information:\n");
    
    // Input using pointers to structure
    printf("Name: ");
    fgets(ptr->name, 50, stdin);
    ptr->name[strcspn(ptr->name, "\n")] = '\0'; // Remove newline
    
    printf("Roll No: ");
    scanf("%d", &ptr->roll_no);
    
    printf("Marks: ");
    scanf("%f", &ptr->marks);
    
    // Clear input buffer
    while (getchar() != '\n');
    
    printf("Grade: ");
    scanf("%c", &ptr->grade);
    
    // Display student information
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);
    printf("Grade: %c\n", s1.grade);
    
    // String operations
    printf("\nString Operations:\n");
    char fullname[100];
    strcpy(fullname, s1.name);
    printf("Copied name: %s\n", fullname);
    
    printf("Length of name: %lu\n", strlen(s1.name));
    
    return 0;
}