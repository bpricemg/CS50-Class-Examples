import cs50

# Positive int from the user
while True:
    n = cs50.get_int("Height: ")
    if n > 0:
        break

print(n)