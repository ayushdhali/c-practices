#include<stdio.h>
int main(){
int t;
printf("Give the Temperature:    \n");
scanf("%d",&t);
if(t<0)
printf("temperature is less than freezing");
if(t==0)
printf("temperature is equal to freezing");
if(t>0)
printf("temperature is greater than freezing");

return 0;
}