#include <stdio.h>
void sum()
{
    int a,b;
    printf("Enter elements for addition :");
    scanf("%d %d",&a,&b);
    printf("The sum is %d \n",a+b);
}
void subtract()
{
    int a,b;
    printf("Enter elements for subtraction :");
    scanf("%d %d",&a,&b);
    printf("The subtraction is %d \n",a-b);
}
void multiply()
{
    int a,b;
    printf("Enter elements for multiplication :");
    scanf("%d %d",&a,&b);
    printf("The multiplication is %d\n",a*b);
}
void divide()
{
    float a,b;
    printf("Enter elements for division :");
    scanf("%f %f",&a,&b);
    printf("The division is %.2f \n",a/b);
}
int main()
{
    sum();
    subtract();
    multiply();
    divide();
    return 0;
}