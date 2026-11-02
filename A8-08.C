#include <stdio.h>
int main()
{
    int arr[10];
    int index=0;
    int num;
    int i,position=-1;
    printf("Enter 10 integer values :\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter an integer to check it's index value is present or not :\n");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(arr[i] == num)
        {
            position = i+1;
            index = 1;
            break;
        }
    }
    if(index == 1)
        printf("Index value %d found at position : %d\n",num,position);
    else
        printf("Index value not present\n");
    return 0;
}