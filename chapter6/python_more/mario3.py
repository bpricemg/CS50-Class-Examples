from cs50 import get_int

def main():
    # Get a positive integer from the user
    n = get_positive_int("Height: ")

    # Print out a square set of blocks
    for i in range(n):
        for j in range(n):
            print("#", end="")
        print()

def get_positive_int(s):
    while True:
        n = get_int(s)
        if n > 0:
            break
    return n
    
main()    
