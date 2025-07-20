"""
PYTHON CONDITIONAL STATEMENTS
This file demonstrates conditional statements in Python:
- if statement
- if-else statement
- elif ladder
- nested if
- ternary operator
- match-case (Python 3.10+)
"""

# Simple if statement
num = 10
if num > 0:
    print(f"{num} is positive\n")

# if-else statement
if num % 2 == 0:
    print(f"{num} is even\n")
else:
    print(f"{num} is odd\n")

# elif ladder
marks = 75
print("Grade: ", end="")
if marks >= 90:
    print("A\n")
elif marks >= 80:
    print("B\n")
elif marks >= 70:
    print("C\n")
elif marks >= 60:
    print("D\n")
else:
    print("F\n")

# Nested if
age = 25
if age >= 18:
    if age <= 60:
        print("You are eligible to work\n")
    else:
        print("You are too old to work\n")
else:
    print("You are too young to work\n")

# Ternary operator
max_num = a if (a := 10) > (b := 5) else b
print(f"Maximum between {a} and {b} is {max_num}\n")

# Match-case (Python 3.10+)
grade = 'B'
print("Grade comments: ", end="")
match grade:
    case 'A':
        print("Excellent!")
    case 'B':
        print("Good job!")
    case 'C':
        print("You can do better")
    case 'D':
        print("Needs improvement")
    case 'F':
        print("Failed")
    case _:
        print("Invalid grade")