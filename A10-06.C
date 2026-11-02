#include <stdio.h>
void sum(int a,int b)
{
    printf("The sum is %d \n",a+b);
}
void subtract(int a,int b)
{
    printf("The subtraction is %d \n",a-b);
}
void multiply(int a,int b)
{
    printf("The multiplication is %d\n",a*b);
}
void divide(float a,float b)
{
    printf("The division is %.2f \n",a/b);
}
int main()
{
    float c,d;
    printf("Enter elements for various calculator functions :");
    scanf("%f %f",&c,&d);
    sum(c,d);
    subtract(c,d);
    multiply(c,d);
    divide(c,d);
    return 0;
}