#include <stdio.h>

int main()

{
    int i = 5;
    printf("the value of i is %d\n",i);
    printf("the value of i++ is %d\n", i++);//pehle print karo phir add karo
    printf("value of i is %d\n",i);
    printf("the value of ++i is %d\n", ++i);//pehle add karo phir print karo
    printf("value of i is %d\n",i);
    printf("the value of i-- is %d\n", i--);//pehle print karo phir subtract karo
    printf("value of i is %d\n",i);
    printf("the value of --I is %d\n", --i);//pehle subtract karo phir print karo
    printf("value of i is %d\n",i);
    printf("the value of I+=10 is %d\n",i+=10);

    return 0;
}