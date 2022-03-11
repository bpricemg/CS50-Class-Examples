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

    // Get character from the file
    char ch = fgetc(txt);

    // For every character in the txt
    while (ch != EOF)
    {
        // Print the character
        printf("%c", ch);
        // Get the next character
        // Note* the pointer is automatically increased by 1 with fgetc()
        ch = fgetc(txt);
    }

    // Print a new line
    printf("\n");
    
    // Close(save) file
    fclose(txt);

    return 0;

}