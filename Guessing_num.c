#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess;
    int nguesses=1;
    srand(time(0));
    number=rand()%100 + 1;
    
     printf("Guess the number between 1 to 100\n");
    do{
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower Number Please!\n");
        }
        else if(guess>number){
            printf("Higher Number Please!\n");
        }
        else{
            printf("You Guessed Correct in %d attempts", nguesses);
        }
        
        nguesses++;
    }while(guess!=number);

    return 0;
}