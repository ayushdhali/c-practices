#include <stdio.h>
void reverse(int i,int* arr)
{
    if(i<1)
        return;
    printf("%d ",arr[i-1]);
    reverse(i-1,arr);
}
int main()
{
    int arr[10];
    printf("Enter array elements : ");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    reverse(10,arr);
    return 0;
}