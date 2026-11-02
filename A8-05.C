#include <stdio.h>
#include <string.h>
int main()
{
    int i,c,j;
    char arr[50];
    printf("Enter the sentence : ");
    fgets(arr,50,stdin);
    printf("The initials : ");
    printf("%0c.",arr[0]);
    for(i=1;i<(50-1);i++)
    {
        if(arr[i]==' ')
            printf("%0c.",arr[i+1]);
    }
    printf("\n");
    return 0;
}