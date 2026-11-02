#include <stdio.h>
#include <stdlib.h>
void arr_maker(int *arr)
{
    printf("Enter the elements of the array :\n");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
}
void average(int *arr)
{
    float avg=0;
    for(int i=0;i<10;i++)
        avg = avg + arr[i];
    avg = avg/10.0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]<avg)
            printf("%d is less than average\n",arr[i]);
        else
            printf("%d is greater than average\n",arr[i]);
    }
}
int main()
{
    int arr[10];
    arr_maker(arr);
    average(arr);
    return 0;
}