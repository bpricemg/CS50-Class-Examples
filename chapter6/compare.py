from cs50 import get_int

# Prompt the user for two integers
x = get_int("x: ")
y = get_int("y: ")

# Compare the two numbers
if x < y:
    print("x is less than y")
elif x > y:
    print("x is greater than y")
else:
    print("x is equal to y")