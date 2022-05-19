import csv

# Creating a dictionary called titles
# could do this with dict()
shows = {}

with open("Favorite TV Show (Responses) - Form Responses 1.csv", "r") as file:
    reader = csv.DictReader(file)
    
    for row in reader:
        title = row["title"].strip().upper()
        # add the title to the dictionary if not already there
        if title not in shows:
            shows[title] = 0
        shows[title] += 1
def f(title):
    return shows[title]

for title in sorted(shows, key=f, reverse=True):
    print(title, shows[title])


