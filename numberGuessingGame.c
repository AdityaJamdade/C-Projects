#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;

    srand(time(0));
    n = rand()%100 + 1;
    int i = 0;
    int guessNum;
    printf("\nGuess the number between 1 - 100 and here we go !\n");
    do
    {

        printf("Guess the number : ");
        scanf("%d", &guessNum);

        if (guessNum<n)
        {
            printf("Guess a little higher number..\n");
        }else if (guessNum>n)
        {
            printf("Guess a little lower number...\n");
        }else{
            printf("\n\tWoohoo you Guess is correct\n");
            printf("\n\tYou took %d attemt/attempts to Guess the correct number ..!\n\n", i+1);
            break;
        }
        i++;
        
        
    } while (n!=guessNum);
    i = 0;
    return 0;
}