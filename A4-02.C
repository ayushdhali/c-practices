#include<stdio.h>
int main(){
     int a,b,c;
     printf("give the angles of the triangle respectively \n");
     scanf("%d""%d""%d",&a,&b,&c);
     if(a==0 || b==0 ||c==0 ){
        printf("\n invalid");
    
     }
     else{
        if(a+b+c==180){
            printf("valid \n");
            if (a==90 || b==90 || c==90){
                printf("\n this is right angle triangle");
            }
            else if(a==b||a==c||b==c){
                printf("\n this is isocelus triangle");

            }
        }
        else{
            printf("invalid \n");
        }
        
     }
    return 0;
}