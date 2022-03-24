import csv
from cs50 import get_string

# Get numbers from user
name = get_string("Name: ")
number = get_string("Number: ")

with open("phonebook.csv", "a") as file:
    writer = csv.writer(file)
    writer.writerow((name, number))
