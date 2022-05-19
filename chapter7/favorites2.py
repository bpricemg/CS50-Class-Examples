import csv

titles = set()

with open("Favorite TV Show (Responses) - Form Responses 1.csv", "r") as file:
    reader = csv.DictReader(file)
    
    for row in reader:
        titles.add(row["title"].strip().upper())

    for title in sorted(titles):
        print(title)