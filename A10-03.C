#include <stdio.h>
void oddeven(int i,int n)
{
    if(i>n)
        return;
    if(i%2==0)
        printf("%d is Even number\n",i);
    else
        printf("%d is odd number\n",i);
    oddeven(i+1,n);
}
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d",&n);
    oddeven(2,n);
    return 0;
}