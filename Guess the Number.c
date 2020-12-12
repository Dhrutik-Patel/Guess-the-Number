#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int number, guess, attempt = 1;
    srand(time(0));
    number = rand() % 100 + 1;  
    
    printf(" ---------------------------------------\n");
    printf("|   Welcome to Guess the Number Game    |\n");
    printf(" ---------------------------------------\n");

    do
    {
        printf(" ---------------------------------------\n\n");
        printf("Guess the number between 1 to 100 \n");
        scanf("%d", &guess);

        if (number < guess)
        {

            printf("Your guess is too HIGH. Guess again please. \n\n");
        }
        else if (number > guess)
        {

            printf("Your guess is too LOW. Guess again please. \n\n");
        }
        else
        {

            printf("Congratulations!!! You guessed correctly in %d tries. \n\n", attempt);
        }

        attempt++;
    } while (number != guess);
    
/*  Using For Loop :

    for(attempt = 0 ; guess != number ; attempt++)  {
        
        printf("Guess the number between 1 to 100 \n");
        scanf("%d", &guess);
        
        if (number < guess)
        {

            printf("Your guess is too HIGH. Guess again please. \n\n");
        }
        else if (number > guess)
        {

            printf("Your guess is too LOW. Guess again please. \n\n");
        }
        else
        {

            printf("Congratulations!!! You guessed correctly in %d tries. \n\n", attempt+1);
        }
    }
*/

/*  Using while Loop :

    while(guess != number)  {
        
        printf("Guess the number between 1 to 100 \n");
        scanf("%d", &guess);

        if (number < guess)
        {

            printf("Your guess is too HIGH. Guess again please. \n\n");
        }
        else if (number > guess)
        {

            printf("Your guess is too LOW. Guess again please. \n\n");
        }
        else
        {

            printf("Congratulations!!! You guessed correctly in %d tries. \n\n", attempt);
        }

        attempt++;
        
    }
    
*/

    printf("Thank you for playing. \nNow it's your friend turn. \nLet's see who will guess the number in minimum attempts.");

    return 0;
}