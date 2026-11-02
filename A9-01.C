#include<stdio.h>

int sum(int a1,int b1, int c1){
    int sum1;
    sum1=a1+b1+c1;
    return (sum1);
}

int main(){
    int a1,b1,c1,result;
    
    printf("\ngive the three numbers:");
    scanf("%d""%d""%d",&a1,&b1,&c1);
     result= sum(a1,b1,c1);
    printf("%d",result);

    return 0;
}