#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int num, a, guesses=0;
    srand(time(0));
    num = rand() % 100 + 1; // generates random no between 1 and 100
    // printf("the no is %d\n", num);
    printf("guess the no between 1 to 100\n");

    do
    {
        scanf("%d", &a);

        if (a > num)
        {
            printf("enter smaller no\n");
            
        }
       else if (a < num)
        {
            printf("enter larger no\n");
            
        }
        guesses++;

    } while (num != a);
    printf("you guess the correct no\n");
    printf("you guess the no in %d atempts\n",guesses);

    return 0;
}