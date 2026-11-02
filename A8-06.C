#include <stdio.h>
int main()
{
    int i;
    int arr[10];
    int num,square;
    int position=-1;
    int found=0;
    printf("Enter 10 square elements for the array :\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter an integer to check it's square value :\n");
    scanf("%d",&num);
    square = num*num;
    for(i=0;i<10;i++)
    {
        if(arr[i] == square)
        {
            position = i+1;
            found = 1;
            break;
        }
    }
    if(found == 1)
        printf("Square term %d found at position %d\n",square,position);
    else
        printf("Square term not found\n");
    return 0;
}