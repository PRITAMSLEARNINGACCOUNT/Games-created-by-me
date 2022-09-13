#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,attempt_of_guesses=0,guess;
    srand(time(0));
    number=rand()%100;

    //printf("PRINT THE RANDOM NUMBER %d\n",number);
   do
   {
       printf("GUESS THE NUMBER\n");
        scanf("%d",&guess);
         if (guess>number)
        {
            printf("LOWER NUMBER PLEASE\n");
            //scanf("%d",&guess);
        }
        else
        {
            printf("HIGHER NUMBER PLEASE\n");
           //scanf("%d",&guess);
        }
        attempt_of_guesses++;
   } while (guess!=number);
   
        
      
       
        
        
    
     printf("NUMBER OF GUESS ATTEMPT %d\n",attempt_of_guesses);
}