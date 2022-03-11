/**
 * Recursive implementaion that lists the first 25 Fibonacci numbers
 */
#include <cs50.h>
#include <stdio.h>

#define N 50

int fibo(int n);

int main(void)
{
    // Print the fibo numbers out
    printf("The first %i numbers in the Fibonacci series are: \n", N);

    for (int i = 0 ; i < N; i++)
    {
        printf("%i  ", fibo(i));
    }

    printf("\n");
}

/**
 * Return the nth Fibonacci number, recursively
 */
int fibo(int n)
{
    // Base case #1
    if (n == 0)
        return 0;

    // Base case #2
    if (n == 1)
        return 1;

    // Recursive case
    else
        return fibo(n - 1) + fibo(n - 2);

}