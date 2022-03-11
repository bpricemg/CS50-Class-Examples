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

    // Print out the GPAs
    for (int i = 0; i < enrollment; i++)
    {
        printf("%s has a gpa of %.3f\n", school[i].name, school[i].gpa);
    }

    // Success
    return 0;
}