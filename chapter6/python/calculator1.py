from cs50 import get_int

# Get two ints from the user
x = get_int("x: ")
y = get_int("y: ")

# Divided the two numbers (note* an int / int will be a double)
z = x / y

# Print out the result with only 3 decimals
print(f"{z:.30f}")

# Floor division
w = x // y

# Printt out the result
print(w)