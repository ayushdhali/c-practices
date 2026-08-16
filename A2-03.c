#include<stdio.h>
int main() {
    int a,b;
    printf("\n input two number :  ");
    scanf("%d""%d",&a,&b);
    
    printf("a= %d b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n The values after swaping : a= %d b= %d   ",a,b);
    
    return 0;
}