#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    if (comp == 's')
    {
        if (you == 'g')
        {
            return 1;
        }
        else if (you == 'w')
        {
            return -1;
        }
        else if (you == 's')
        {
            return 0;
        }
    }

    if (comp == 'w')
    {
        if (you == 's')
        {
            return 1;
        }
        else if (you == 'g')
        {
            return -1;
        }
        else if (you == 'w')
        {
            return 0;
        }
    }

    if (comp == 'g')
    {
        if (you == 'w')
        {
            return 1;
        }
        else if (you == 's')
        {
            return -1;
        }
        else if (you == 'g')
        {
            return 0;
        }
    }

    // if (you == 's' && comp == 's')
    // {
    //     return 0;
    // }
    // else if (you == 'w' && comp == 's')
    // {
    //     return -1;
    // }
    // else if (you == 'g' && comp == 's')
    // {
    //     return 1;
    // }

    // if (you == 's' && comp == 'w')
    // {
    //     return 1;
    // }
    // else if (you == 'w' && comp == 'w')
    // {
    //     return 0;
    // }
    // else if (you == 'g' && comp == 'w')
    // {
    //     return -1;
    // }

    // if (you == 's' && comp == 'g')
    // {
    //     return -1;
    // }
    // else if (you == 'w' && comp == 'g')
    // {
    //     return 1;
    // }
    // else if (you == 'g' && comp == 'g')
    // {
    //     return 0;
    // }
}

int main()
{
    char you, comp;
    int result = 0;

    printf("\n\n----------- Game ---------\n");

    while (1)
    {
        srand(time(0));
        int number = rand() % 100 + 1; // Generates a random number between 1 and 100
        // printf("The number is :%d", number);
        if (number < 33)
        {
            comp = 's';
        }
        else if (number > 33 && number < 66)
        {
            comp = 'w';
        }
        else
        {
            comp = 'g';
        }
        printf("\n\nChoose ('s' for snake, 'w' for water & 'g' for gun and 'q' for Exit)\n");
        fflush(stdin);
        scanf("%c", &you);

        if (you == 'q')
        {
            printf("Exiting the Game..");
            break;
        }
        result = snakeWaterGun(you, comp);

        printf("You chose %c\n", you);
        printf("Comp chose %c\n", comp);
        if (result == 0)
        {
            printf("\t--------- Game draw --------\n");
        }
        else if (result == 1)
        {
            printf("\t--------- You Won --------\n");
        }
        else if (result == -1)
        {
            printf("\t-------- You Lose --------\n");
        }
        else
        {
            printf("Wrong character...!");
        }
    }

    return 0;
}