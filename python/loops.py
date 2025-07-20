"""
PYTHON LOOPS
This file demonstrates loop statements in Python:
- for loop
- while loop
- nested loops
- loop control statements
- iterating through different data structures
"""

# for loop
print("for loop:")
for i in range(1, 6):
    print(i, end=" ")
print("\n")

# while loop
print("while loop:")
j = 1
while j <= 5:
    print(j, end=" ")
    j += 1
print("\n")

# Nested loops
print("Nested loops (pattern):")
for row in range(1, 4):
    for col in range(1, row + 1):
        print("*", end=" ")
    print()
print()

# break and continue
print("Loop with break and continue:")
for i in range(1, 11):
    if i == 3:
        continue  # Skip 3
    if i == 8:
        break  # Exit at 8
    print(i, end=" ")
print("\n")

# Iterating through different data structures
print("Iterating through data structures:")

# List
fruits = ["apple", "banana", "cherry"]
print("List iteration:")
for fruit in fruits:
    print(fruit, end=" ")
print("\n")

# Dictionary
student = {"name": "John", "age": 20, "grade": "A"}
print("Dictionary iteration:")
for key, value in student.items():
    print(f"{key}: {value}")
print()

# String
message = "Hello"
print("String iteration:")
for char in message:
    print(char, end=" ")
print("\n")

# enumerate
print("Using enumerate:")
for index, fruit in enumerate(fruits, start=1):
    print(f"{index}. {fruit}")