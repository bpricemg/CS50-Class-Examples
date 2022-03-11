import cs50

# Prompt the user for a string
s = cs50.get_string("Do you agree? ")

s = s.lower()

# Compare the two numbers
if s in ["y", "yes"]:
    print("Agreed")
elif s in ["n", "no"]:
    print("Not agreed")