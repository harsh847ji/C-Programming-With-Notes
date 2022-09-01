#include <stdio.h>
int main()
{
    float p , r , t  ;
    printf("this program is used to calculate simple interest\n");
    printf("type the principal value\n");
    scanf("%f",&p);
    printf("type the rate of interest\n");
    scanf("%f",&r);
    printf("type the time\n");
    scanf("%f",&t);
    
    printf("the simple interest is %f ", (p*r*t)/100);

}