#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,attemptofguess=0;
    srand(time(0));
    number=rand()%1000;
    //printf("PRINT THE RANDOM NUMBER %d\n",number);
     printf("GIVE A GUESSED NUMBER BETWEEN 1 TO 1000\n");
        scanf("%d",&guess);
    
    while (guess!=number)
    { 
       
        if (guess>number)
        {
            printf("PLEASE GIVE A LOWER NUMBER\n");
            scanf("%d",&guess);
        }
        else
        {
           printf("PLEASE GIVE A HIGHER NUMBER\n");
           scanf("%d",&guess);
        }
        attemptofguess++;
    }
    printf("YOU GUESSSED THE NUMBER %d AT %d GUESSES\n",number,attemptofguess+1);
}