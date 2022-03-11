/**
 * Search a phonebook for a name
 */
#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string phone;
}
person;

int main(int argc, string argv[])
{
    // Array of persons called students
    person students[5];

    students[0].name = "Will";
    students[0].phone = "413-458-9582";

    students[1].name = "Noah";
    students[1].phone = "555-555-5551";

    students[2].name = "Sam";
    students[2].phone = "508-123-4567";

    students[3].name = "Kate";
    students[3].phone = "800-529-1010";

    students[4].name = "Jude";
    students[4].phone = "Not listed";

    // Get name from user
    string n = get_string("Name: ");

    // Search for name n
    for (int i = 0; i < 5; i++)
    {
        // If name n is in phonebook
        if (strcmp(students[i].name, n) == 0)
        {
            // Found
            printf("Number: %s\n", students[i].phone);
            return 0;
        }
    }

    // Not found
    printf("Not found\n");
    return 1;

}