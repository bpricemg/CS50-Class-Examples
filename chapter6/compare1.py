import cs50

# Prompt the user for a string
s = cs50.get_string("Do you agree? ")

# Compare the two numbers
if s == "Y" or s == "y":
    print("Agreed")
elif s == "N" or s == "n":
    print("Not agreed")