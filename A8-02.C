#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the length of array : \n");
    scanf("%d",&n);
    int a[n],b[n],sum[n];
    printf("Enter elements in 1st array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements in 2nd array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        sum[i] = a[i] + b[i];
    }
    printf("The sum of those 2 arrays : \n");
    for(i=0;i<n;i++)
    {
        printf("%d",sum[i]);
    }
    return 0;
}