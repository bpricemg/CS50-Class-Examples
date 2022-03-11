/**
 * Hello.c
 * Brandon Price
 * CS50
 * 9/22/20
 *
 * This program says hello to the user
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the user's name
    string answer = get_string("What is your name: ");

    // Says hello to the user
    printf("hello, %s\n", answer);
}