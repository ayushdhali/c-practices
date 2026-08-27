#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float x1,x2;
    printf("\n Give the values of a,b,c respectively");
    scanf("%d""%d""%d",&a,&b,&c);
    float  d = sqrt(b*b -4*a*b);
    
    x1 = (-b-d)/2*a;
    x2 = (-b+d)/2*a;

    printf("\n x1 is%f and x2 is %f",x1,x2);
    



    return  0;

}