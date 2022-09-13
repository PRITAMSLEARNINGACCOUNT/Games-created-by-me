#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    FILE *ptr;
    ptr = fopen("User 1.txt", "r");

    char comp_selection[100];
    char comp_selection1[100];
    printf("Enter what you want to select(For user 1)\n");
    gets(comp_selection1);
    if (strlen(comp_selection1) == 4 || strlen(comp_selection1) == 5 || strlen(comp_selection1) == 6 || strlen(comp_selection1) == 7 || strlen(comp_selection1) == 8)
    {
        fclose(ptr);
        FILE *ptr2;
        ptr2 = fopen("User 1.txt", "w");
        fputs(comp_selection1, ptr2);
        fclose(ptr2);
        FILE *ptr3;
        ptr3 = fopen("User 1.txt", "r");
        fgets(comp_selection, 100, ptr3);
        fclose(ptr3);
    }
    else
    {
        fgets(comp_selection, 100, ptr);
        fclose(ptr);
    }

    char user_selection[100];
    char user_selection1[100];
    printf("Enter what you want to select(For user 2)\n");
    gets(user_selection1);
    if (strlen(user_selection1) == 4 || strlen(user_selection1) == 5 || strlen(user_selection1) == 6 || strlen(user_selection1) == 7 || strlen(user_selection1) == 8)
    {

        FILE *ptr4;
        ptr4 = fopen("User 2.txt", "w");
        fputs(user_selection1, ptr4);
        fclose(ptr4);
        FILE *ptr5;
        ptr5 = fopen("User 2.txt", "r");
        fgets(user_selection, 100, ptr5);
        fclose(ptr5);
    }
    else
    {
        FILE *ptr6;
        ptr6 = fopen("User 2.txt", "r");
        fgets(user_selection, 100, ptr);
        fclose(ptr6);
    }
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
