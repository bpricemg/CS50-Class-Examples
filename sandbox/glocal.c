#include <cs50.h>
#include <stdio.h>

// TODO: function prototype to fix
void add_5(int x);

int main(void)
{
    // input from user
    int x = get_int("Enter some integer value: ");
    printf("the value of x before adding 5 is %d\n", x);
    
    // TODO: fix this so that the value of x is updated
    add_5(x);
    printf("the value of x after adding 5 is %d\n", x);
}

// TODO: function definition to fix
void add_5(int x)
{
    x = x + 5;
}
