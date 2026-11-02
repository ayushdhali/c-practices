#include <stdio.h>
#include <string.h>
int main()
{
    int i,c=0,d=0,e;
    char arr[50];
    printf("Enter the sentence : \n");
    fgets(arr,50,stdin);
    for(i=0;i<50;i++)
    {
        if(arr[i]==' ')
        {
            c++;
            e=i;
        }
    }
    printf("%0c.",arr[0]);
    for(i=1;i<50;i++)
    {
        if(arr[i]==' ' && d<(c-1))
        {
            printf("%0c.",arr[i+1]);
            d++;
        }
    }
    return 0;
}