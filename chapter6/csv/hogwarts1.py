# Counting the students in each house
import csv

houses = {
    "Gryffindor": 0,
    "Hufflepuff": 0,
    "Ravenclaw": 0,
    "Slytherin": 0
}

with open("hogwarts.csv", "r") as file:
    reader = csv.DictReader(file)
    print(reader.fieldnames)
    for row in reader:
        house = row["House"]
        houses[house] += 1

# Print out the results
for house in houses:
    count = houses[house]
    print(f"{house}: {count}")