from cs50 import get_int, get_string
from statistics import mean

def main():
    # Prompt user for input about each hole they played.
    holes = []
    while True:
        hole_number = get_int("Golf course hole number: ")
        while True:
            par = get_int("Hole par: ")
            if par > 2 and par < 6:
                break
        score = get_int("Your score: ")
        holes.append({"hole number": hole_number,
                        "par": par,
                        "score": score})
        print()

        # Determine if user is done inputting hole information
        while True:
            more = get_string("Would you like to input information for another golf hole? ").lower()
            if more in ["no", "n", "yes", "y"]:
                break
        print()
        if "n" in more:
            break


    # Percentages
    print_percentages(holes)

def print_percentages(holes):
    """Prints the percentace of scores"""
    scores = {
        "birdies": 0,
        "pars": 0,
        "bogies": 0,
        "double bogies": 0,
        "triple bogies": 0
    }

    for row in holes:
        offset = row["par"] - row["score"]

        if offset >= 1:
            scores["birdies"] += 1
        elif offset == 0:
            scores["pars"] += 1
        elif offset == -1:
            scores["bogies"] += 1
        elif offset == -2:
            scores["double bogies"] += 1
        else:
            scores["triple bogies"] += 1

    print("Percentages:")
    score = scores["birdies"]
    print(f"\tBirdy or better: {int(score / len(holes) * 100)}%")
    score = scores["pars"]
    print(f"\tPar: {int(score / len(holes) * 100)}%")
    score = scores["bogies"]
    print(f"\tBogey: {int(score / len(holes) * 100)}%")
    score = scores["double bogies"]
    print(f"\tDouble Bogey: {int(score / len(holes) * 100)}%")
    score = scores["triple bogies"]
    print(f"\tTriple Bogey or Higher: {int(score / len(holes) * 100)}%")

main()

