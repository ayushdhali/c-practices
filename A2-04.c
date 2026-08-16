#include<stdio.h>
int main() {
    int c;
    printf("\n input temp(C) :  ");
    scanf("%d",&c);
    float F =((c*9)/5)+32;
    printf("the Farenheight value is %f \n",F);
    
    return 0;
}