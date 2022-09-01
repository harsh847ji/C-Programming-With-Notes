#include <stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector sumVector(struct vector v1,struct vector v2){
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}

int main()
{
    
    struct vector v1,v4,sum;
    v1.x=34;
    v1.y=54;
    printf("X dim is %d and Y dim is %d\n",v1.x,v1.y);
    v4.x=3;
    v4.y=5;
    printf("X dim is %d and Y dim is %d\n",v4.x,v4.y);

    sum=sumVector(v1,v4);
    
    printf("X dim is %d and Y dim is %d\n",sum.x,sum.y);
    

    return 0;
}