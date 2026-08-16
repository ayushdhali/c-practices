#include<stdio.h>
int main() {
    int a,b,c=0;
    printf("\n input two number :  ");
    scanf("%d""%d",&a,&b);
    
    printf("a= %d b=%d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n The values after swaping : a= %d b= %d   ",a,b);
    
    return 0;
}