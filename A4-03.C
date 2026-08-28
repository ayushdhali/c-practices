#include<stdio.h>
int main(){
    int l,b,a=1,p=0;
    printf("\n give the lenth and breat:  ");
    scanf("%d""%d",&l,&b);

    if(l==0 || b==0){
    printf("\n invalid ");


    }
    else {
        p = 2*(l+b);
        a= l*b;
         if(a>p){
            printf("\n area is greater %d and perimeter is %d",a,p);
         }
         else{
            printf("perimeter is greater %d and area is %d \n",p,a);

         }
    
    
    
    
    
    
        }

    
    
    
    return 0;

}