import sys

numbers = [4, 6, 8, 10, 12, 14]

if 6 in numbers:
    print("Found")
    sys.exit(0)

print("Not found")
sys.exit(1)