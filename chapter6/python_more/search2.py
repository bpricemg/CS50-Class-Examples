from cs50 import get_string
import sys

names = {
    "Carter": "413-555-5551",
    "Leslie": "888-101-5555"
}

name = get_string("Name: ")

if name in names:
    number = names[name]
    print(f"Number: {number}")
else:
    print("Not found")