#include <stdio.h>
int main()
{
    int n,i,f=0;
    printf("Enter the length of the sentence : \n");
    scanf("%d",&n);
    char arr[n];
    printf("Enter the sentence :\n");
    for(i=0;i<n;i++)
    {
        scanf("%c",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
        printf("NOT PALINDROME");
    else
        printf("PALINDROME");
    return 0;
}