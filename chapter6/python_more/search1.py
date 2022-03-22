import sys

names = ["Bill", "Jen", "Emma", "Margot", "Kevin", "Jade"]

if "Jen" in names:
    print("Found")
    sys.exit(0)

print("Not found")
sys.exit(1)