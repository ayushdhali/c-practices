#include<stdio.h>
int main(){

    int b,gs;
    printf("\nEnter the basic salary: ");
    scanf("%d",&b);

    if(b<1500){
        gs=(b+(b*0.10)+(b*0.90));
        printf("\n%d is gross salary",gs);
    }
    else if(b>=1500){
        gs=(b+500+(b*0.98));
        printf("\n%d is gross salary",gs);
    }
    else{
        printf("\ninvalid input");
        
    }

return 0;
}