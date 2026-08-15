#include<stdio.h>
int main() {
    float r;
    float pi=3.14;

    printf("\n input radius :  ");
    scanf("%f",&r);
    
    float ar = pi*r*r;
    float pe = 2*pi*r;

    printf("\n the Area is %f",ar);
    printf("\n the perimeter is %f",pe);

    return 0;
}