#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    srand(time(0));
    int random_number = rand() % 100 + 1;

    char scissor[] = "Scissor";
    char paper[] = "Paper";
    char stone[] = "Rock";
    char comp_selection[100];
    if (random_number < 33)
    {
        strcpy(comp_selection, scissor);
    }
    else if (random_number > 33 && random_number < 66)
    {
        strcpy(comp_selection, paper);
    }
    else if (random_number > 66 && random_number < 99)
    {
        strcpy(comp_selection, stone);
    }

    char user_selection[100];
    printf("Enter what you want to select\n");
    gets(user_selection);
    if (comp_selection[0] == 'S' && user_selection[0] == 'S' || comp_selection[0] == 'S' && user_selection[0] == 's')
    {
        printf("Match draw\n");
    }
    else if (comp_selection[0] == 'R' && user_selection[0] == 'S' || comp_selection[0] == 'R' && user_selection[0] == 's')
    {
        printf("Computer wins as computer selected %s and you selected %s\n", comp_selection, user_selection);
    }
    else if (comp_selection[0] == 'P' && user_selection[0] == 'S' || comp_selection[0] == 'P' && user_selection[0] == 's')
    {
        printf("You win as you selected %s and computer selected %s\n", user_selection, comp_selection);
    }
    else if (comp_selection[0] == 'P' && user_selection[0] == 'P' || comp_selection[0] == 'P' && user_selection[0] == 'p')
    {
        printf("Match draw\n");
    }
    else if (comp_selection[0] == 'S' && user_selection[0] == 'P' || comp_selection[0] == 'S' && user_selection[0] == 'p')
    {
        printf("Computer wins as computer selected %s and you selected %s\n", comp_selection, user_selection);
    }
    else if (comp_selection[0] == 'R' && user_selection[0] == 'P' || comp_selection[0] == 'R' && user_selection[0] == 'p')
    {
        printf("You win as you selected %s and computer selected %s\n", user_selection, comp_selection);
    }
    else if (comp_selection[0] == 'R' && user_selection[0] == 'R' || comp_selection[0] == 'R' && user_selection[0] == 'r')
    {
        printf("Match draw\n");
    }
    else if (comp_selection[0] == 'S' && user_selection[0] == 'R' || comp_selection[0] == 'S' && user_selection[0] == 'r')
    {
        printf("You win as you selected %s and computer selected %s\n", user_selection, comp_selection);
    }
    else if (comp_selection[0] == 'P' && user_selection[0] == 'R' || comp_selection[0] == 'P' && user_selection[0] == 'r')
    {
        printf("Computer wins as computer selected %s and you selected %s\n", comp_selection, user_selection);
    }

    return 0;
}
