from cs50 import get_int

# Get a positive integer from the user
while True:
    n = get_int("Height: ")
    if n > 0:
        break

# Print out a square set of blocks
for row in range(n):
    for col in range(n):
        print("#", end="")
    print()