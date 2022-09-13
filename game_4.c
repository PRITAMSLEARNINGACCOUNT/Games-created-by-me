#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,attempt_of_guesses=0,guess;
    srand(time(0));
    number=rand()%100;
printf("GUESS THE NUMBER\n");
        scanf("%d",&guess);
    //printf("PRINT THE RANDOM NUMBER %d\n",number);
    for ( attempt_of_guesses=0; number != guess; attempt_of_guesses++)
    {
        
        if (guess>number)
        {
            printf("LOWER NUMBER PLEASE\n");
            scanf("%d",&guess);
        }
        else
        {
            printf("HIGHER NUMBER PLEASE\n");
            scanf("%d",&guess);
        }
       
        
        
    }
     printf("NUMBER OF GUESS ATTEMPT %d\n",attempt_of_guesses+1);
}