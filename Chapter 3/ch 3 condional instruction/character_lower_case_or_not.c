#include<stdio.h>

int main()

    {
    char character;
    printf("enter the character\n");
    scanf("%c",&character);
    if (character<=122 && character>=97)//ascii values of characters//
    {
        printf("it is lower case\n");
    }
    else{
        printf("it is not a lower case\n");
    }
    

    
    return 0;
}