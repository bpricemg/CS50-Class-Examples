#include <cs50.h>
#include <stdio.h>

// function prototype
int final_score(int goal_num, bool snitch_caught);

int main(void)
{
    int goal_num = get_int("Number of times your chasers got the quaffle through a hoop: ");
    bool snitch_caught = get_int("Did your team's seeker catch the snitch? Enter 1 if true, 0 otherwise: ");
    int score = final_score(goal_num, snitch_caught);
    printf("Your team's final score is: %d\n", score);
}

// function definition
int final_score(int goal_num, bool snitch_caught)
{
    int score = 0;

    // Each goal is worth 10 points
    score += goal_num * 10;

    // The snitch is worth 150 points
    if (snitch_caught)
    {
        score += 150;
    }

    return score;
}
