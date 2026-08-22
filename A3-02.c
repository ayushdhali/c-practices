#include<stdio.h>
int main (){
int marks;
printf("Give the obtain marks:    \n");
scanf("%d",&marks);
if (marks>=600)
printf("1st Division");
else if(450<marks)
printf("2nd Division");
else if(300<marks)
printf("3rd Division");
else
printf("fail");

return 0;
}