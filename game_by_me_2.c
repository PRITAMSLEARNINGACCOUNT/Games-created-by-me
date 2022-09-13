#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{

    char comp_selection[100];
    printf("Enter what you want to select(For user 1)\n");
    gets(comp_selection);

    char user_selection[100];
    printf("Enter what you want to select(For user 2)\n");
    gets(user_selection);
    if (comp_selection[0] == 'S' && user_selection[0] == 'S' || comp_selection[0] == 'S' && user_selection[0] == 's' || comp_selection[0] == 's' && user_selection[0] == 's' || comp_selection[0] == 's' && user_selection[0] == 'S')
    {
        printf("Match draw\n");
    }
    else if (comp_selection[0] == 'R' && user_selection[0] == 'S' || comp_selection[0] == 'R' && user_selection[0] == 's' || comp_selection[0] == 'r' && user_selection[0] == 's' || comp_selection[0] == 'r' && user_selection[0] == 'S')
    {
        printf("User 1 wins as User 1 selected %s and you selected %s\n", comp_selection, user_selection);
    }
    else if (comp_selection[0] == 'P' && user_selection[0] == 'S' || comp_selection[0] == 'P' && user_selection[0] == 's' || comp_selection[0] == 'p' && user_selection[0] == 's' || comp_selection[0] == 'p' && user_selection[0] == 'S')
    {
        printf("You win as you selected %s and User 1 selected %s\n", user_selection, comp_selection);
    }
    else if (comp_selection[0] == 'P' && user_selection[0] == 'P' || comp_selection[0] == 'P' && user_selection[0] == 'p' || comp_selection[0] == 'p' && user_selection[0] == 'p' || comp_selection[0] == 'p' && user_selection[0] == 'P')
    {
        printf("Match draw\n");
    }
    else if (comp_selection[0] == 'S' && user_selection[0] == 'P' || comp_selection[0] == 'S' && user_selection[0] == 'p' || comp_selection[0] == 's' && user_selection[0] == 'p' || comp_selection[0] == 's' && user_selection[0] == 'P')
    {
        printf("User 1 wins as User 1 selected %s and you selected %s\n", comp_selection, user_selection);
    }
    else if (comp_selection[0] == 'R' && user_selection[0] == 'P' || comp_selection[0] == 'R' && user_selection[0] == 'p' || comp_selection[0] == 'r' && user_selection[0] == 'p' || comp_selection[0] == 'r' && user_selection[0] == 'P')
    {
        printf("You win as you selected %s and User 1 selected %s\n", user_selection, comp_selection);
    }
    else if (comp_selection[0] == 'R' && user_selection[0] == 'R' || comp_selection[0] == 'R' && user_selection[0] == 'r' || comp_selection[0] == 'r' && user_selection[0] == 'r' || comp_selection[0] == 'r' && user_selection[0] == 'R')
    {
        printf("Match draw\n");
    }
    else if (comp_selection[0] == 'S' && user_selection[0] == 'R' || comp_selection[0] == 'S' && user_selection[0] == 'r' || comp_selection[0] == 's' && user_selection[0] == 'r' || comp_selection[0] == 's' && user_selection[0] == 'R')
    {
        printf("You win as you selected %s and User 1 selected %s\n", user_selection, comp_selection);
    }
    else if (comp_selection[0] == 'P' && user_selection[0] == 'R' || comp_selection[0] == 'P' && user_selection[0] == 'r' || comp_selection[0] == 'p' && user_selection[0] == 'r' || comp_selection[0] == 'p' && user_selection[0] == 'R')
    {
        printf("User 1 wins as User 1 selected %s and you selected %s\n", comp_selection, user_selection);
    }

    return 0;
}
