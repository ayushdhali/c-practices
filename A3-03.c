#include<stdio.h>
int main(){ 
int bill;
float new_bill;


 printf("\n  Give the bill Amount:   ");
 scanf("%d",&bill);
 
 if(bill>1999){
    new_bill = bill + ((bill*22)/100);
    printf("Your new bill is %f",new_bill);
 }
 else if(bill>=1200){
    new_bill = bill + ((bill*15)/100);
    printf("Your new bill is %f",new_bill);
 }
 else if(bill>=800){
    new_bill = bill + ((bill*10)/100);
    printf("Your new bill is %f",new_bill);
 }
 else if(bill<800){
 printf("No tax required on your bill amount");
 }
 
 return 0;

}