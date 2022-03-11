/**
 * Linear search for a phone number
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // An array of names
    string name[] = {"Will", "Noah", "Sam", "Kate", "Jude"};

    // An array of phone numbers
    string phone[] = {"413-458-9582", "555-555-5551", "508-123-4567", "800-529-1010", "not listed"};

    // Get name from user
    string n = get_string("Name: ");

    // Search for name n
    for (int i = 0; i < 5; i++)
    {
        // If name n is in phonebook
        if (strcmp(name[i], n) == 0)
        {
            // Found
            printf("Number: %s\n", phone[i]);
            return 0;
        }
    }

    // Not found
    printf("Not found\n");
    return 1;

}