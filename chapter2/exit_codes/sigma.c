#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
	// Input verification
	if (argc < 3)
	{
	    printf("Usage: ./sigma <space seperated list of numbers>\n");
	    return 1;
	}

	// Add up all the numbers provided from user in command line
	float sum = 0;
	for (int i = 1; i < argc; i++)
	{
	    sum += atof(argv[i]);
	}

	// Print the sum
	printf("The total sum is: %0.3f\n", sum);

	// Success
    return 0;
}