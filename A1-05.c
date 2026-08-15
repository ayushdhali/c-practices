#include<stdio.h>
int main() {

    int a,b;
    printf("\n input 1st number :  ");
    scanf("%d",&a);

    printf("\n input 2nd number :  ");
    scanf("%d",&b);
    
    if(a>b)
        printf("\n a is maximum");
    else
       printf("\n b is maximum");

    return 0;
}