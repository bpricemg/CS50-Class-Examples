from cs50 import get_int

# Get a positive integer from the user
while True:
    n = get_int("Height: ")
    if n > 0:
        break

# Print out the blocks stacked
for i in range(n):
    print("#")
