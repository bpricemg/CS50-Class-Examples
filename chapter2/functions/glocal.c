#include <cs50.h>
#include <stdio.h>

// function prototype to fix
int add_5(int x);

int main(void)
{
    // input from user
    int x = get_int("Enter some integer value: ");
    printf("the value of x before adding 5 is %d\n", x);

    // fix this so that the value of x is updated
    x = add_5(x);
    printf("the value of x after adding 5 is %d\n", x);
}

// function definition to fix
int add_5(int x)
{
    return x + 5;
}
