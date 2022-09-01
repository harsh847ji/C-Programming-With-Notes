#include<stdio.h>
float force(float m);
int main()

    {
        float a;
        printf("enter the mass in kg.\n");
        scanf("%f",&a);
        printf("the force on the object of mass %fkg is %fNewton",a,force(a));
    
    return 0;
}
float force(float m){
    float result;
    result=m*9.8;
    return result;
}