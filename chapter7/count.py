import csv

# Creating a dictionary called titles
# could do this with dict()
titles = {}

with open("Favorite TV Show (Responses) - Form Responses 1.csv", "r") as file:
    reader = csv.DictReader(file)
    
    for row in reader:
        title = row["title"].strip().upper()
        # add the title to the dictionary if not already there
        if title not in titles:
            titles[title] = 0
        titles[title] += 1