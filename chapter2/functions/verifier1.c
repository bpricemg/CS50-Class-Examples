#include <cs50.h>
#include <stdio.h>

// Verifier prototype
bool verify(int first, int second, int result);

int main(void)
{
    // input from user
    int x = get_int("Enter the first int you are adding: ");
    int y = get_int("Enter the second int you are adding: ");
    int z = get_int("Enter the result: ");

    // Verify the result using the function you wrote, and print 'correct!' or 'incorrect!'
    if (verify(x, y, z))
    {
        printf("Correct!\n");
    }
    else
    {
        printf("Incorrect!\n");
    }

}

// Verifier function
bool verify(int first, int second, int result)
{
    return first + second == result;
}
