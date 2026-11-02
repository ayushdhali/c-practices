#include <stdio.h>
int digits(int a)
{
    if(a==0)
        return 0;
    else
        return 1 + digits(a/10);
}
int main()
{
    int a;
    printf("Enter a number :\n");
    scanf("%d",&a);
    printf("No. of digits in %d is %d\n",a,digits(a));
    return 0;
}