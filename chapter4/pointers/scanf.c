// Gets an integer from a user using scanf

#include <stdio.h>

int main(void)
{
    int x;
    printf("integer: ");
    scanf("%i", &x);
    printf("you inputed: %i\n", x);
}