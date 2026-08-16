#include<stdio.h>
int main() {
    int roll,sub1,sub2,sub3,sub4;
    printf("\n input roll number :  ");
    scanf("%d",&roll);
    printf("\n input obtain number respectively:  ");
    scanf("%d""%d""%d""%d",&sub1,&sub2,&sub3,&sub4);
    float pe =((sub1+sub2+sub3+sub4)/400.00)*100 ;
    
    printf(" roll no %d  and obtain percentage %f \n",roll,pe);
    
    return 0;
}