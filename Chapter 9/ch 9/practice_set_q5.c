#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;
}complexno;
void display(complexno c){
    printf("the value of real is %f\n",c.real);
    printf("the value of imaginarypart is %f\n",c.imag);
}


int main()
{
    complexno cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value of %d real no\n",i+1);
        scanf("%f",&cnums[i].real);
        printf("enter the value of %d imaginary no\n",i+1);
        scanf("%f",&cnums[i].imag);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }

    return 0;
}