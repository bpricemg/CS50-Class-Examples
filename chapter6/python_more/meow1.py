import cs50

def main():
    i = cs50.get_int("Integer please: ")
    meow(i)

def meow(n):
    for i in range(n):
        print("meow")

main()