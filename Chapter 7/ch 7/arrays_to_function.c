#include <stdio.h>

void printarray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the value of %d is %d\n", i + 1, ptr[i]);
    }
    // void printarray(int *ptr,int n){
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("the value of %d is %d\n",i+1,*(ptr+i));
    //     }
    ptr[2] = 5555; // this will change in main as well
}
int main()

{
    int arr[] = {56, 67, 345, 234, 56, 456, 456};
    printarray(arr, 7);
    printf("%d", arr[2]);
    return 0;
}