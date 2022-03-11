#include <stdio.h>

int main(void)
{
    // Open txt filer with "r"ead capabilities
    FILE *txt = fopen("cs50.txt", "r");

    // Check to see if the file was successfully opened
    if (!txt)
    {
        // Return an error
        printf("Error: file not found\n");
        return 1;
    }

    // For every character in the txt
    for (char ch = fgetc(txt); ch != EOF; ch = fgetc(txt))
    {
        // Print character
        printf("%c", ch);
    }

    // Print a new line
    printf("\n");

    // Close(save) file
    fclose(txt);

    return 0;

}