#include<stdio.h>
int main(){
    int d,n,rev=0;
    printf("\n Give a number:  ");
    scanf("%d",&n);
    while(n!=0){
        d = n%10;
        rev= rev*10+d;
        d=n/10;
        
       n = n/10;
        //pprothome d= n%10 er mane ex 3564 thakle 356 bad hobe hoye ota jog hobe trpr n/10 mane 354 theke 4 bad hoye porer loop ta cholbe 
    }  
    printf("\n %d ",rev);


    return 0;
}