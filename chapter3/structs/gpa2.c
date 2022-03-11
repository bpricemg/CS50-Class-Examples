/**
 * Use a data structure to hold student names and GPAs. Print out the information
 */
#include <cs50.h>
#include <stdio.h>

#include "student.h"

int main(int argc, string argv[])
{
    int enrollment = get_int("Enrollment: ");
    printf("\n");

    // Allocate space to store the student information
    student school[enrollment];

    // Prompt the user for each students' information
    for (int i = 0; i < enrollment; i++)
    {
        printf("Student #%i\n", i + 1);
        printf("\t");
        school[i].name = get_string("Name: ");
        printf("\t");
        school[i].gpa = get_float("GPA: ");
        printf("\n");
    }

    // Save to disk
    // Create a variable of type file (the * is a pointer)
    // Name the file and open it with "w"rite capability
    FILE *file = fopen("gpa.csv", "w");

    // If file opened successfully
    if (file)
    {
        for (int i = 0; i < enrollment; i++)
        {
            fprintf(file, "%s, %f\n", school[i].name, school[i].gpa);
        }
    }

    // Save/close the file
    fclose(file);
}