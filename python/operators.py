"""
PYTHON OPERATORS
This file demonstrates various types of operators in Python:
- Arithmetic operators
- Comparison operators
- Logical operators
- Assignment operators
- Bitwise operators
- Membership operators
- Identity operators
"""

# Arithmetic operators
a = 10
b = 3
print("Arithmetic Operators:")
print(f"{a} + {b} = {a + b}")  # Addition
print(f"{a} - {b} = {a - b}")  # Subtraction
print(f"{a} * {b} = {a * b}")  # Multiplication
print(f"{a} / {b} = {a / b}")  # Division
print(f"{a} // {b} = {a // b}")  # Floor division
print(f"{a} ** {b} = {a ** b}")  # Exponentiation
print(f"{a} % {b} = {a % b}\n")  # Modulus

# Comparison operators
print("Comparison Operators:")
print(f"{a} == {b} is {a == b}")
print(f"{a} != {b} is {a != b}")
print(f"{a} > {b} is {a > b}")
print(f"{a} < {b} is {a < b}")
print(f"{a} >= {b} is {a >= b}")
print(f"{a} <= {b} is {a <= b}\n")

# Logical operators
x = True
y = False
print("Logical Operators:")
print(f"{x} and {y} is {x and y}")
print(f"{x} or {y} is {x or y}")
print(f"not {x} is {not x}\n")

# Assignment operators
print("Assignment Operators:")
c = a
c += b; print(f"c += b → c = {c}")
c -= b; print(f"c -= b → c = {c}")
c *= b; print(f"c *= b → c = {c}")
c /= b; print(f"c /= b → c = {c}")
c //= b; print(f"c //= b → c = {c}")
c **= b; print(f"c **= b → c = {c}")
c %= b; print(f"c %= b → c = {c}\n")

# Bitwise operators
print("Bitwise Operators:")
print(f"{a} & {b} = {a & b}")  # AND
print(f"{a} | {b} = {a | b}")  # OR
print(f"{a} ^ {b} = {a ^ b}")  # XOR
print(f"~{a} = {~a}")  # NOT
print(f"{a} << 1 = {a << 1}")  # Left shift
print(f"{a} >> 1 = {a >> 1}\n")  # Right shift

# Membership operators
list_example = [1, 2, 3, 4, 5]
print("Membership Operators:")
print(f"2 in {list_example} = {2 in list_example}")
print(f"6 not in {list_example} = {6 not in list_example}\n")

# Identity operators
x = 5
y = 5
z = [1, 2, 3]
w = [1, 2, 3]
print("Identity Operators:")
print(f"x is y = {x is y}")  # True (same value, immutable)
print(f"z is w = {z is w}\n")  # False (different objects)