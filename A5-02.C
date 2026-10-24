#include<stdio.h>
int main(){
    int y;
    printf("\n give the Year: ");
    scanf("%d",&y);

    if(y%4==0 && y%100 != 0){
        
        printf("\n It is a leap year");
    }
    else if (y%400 ==0){
        printf("\n It is a leap year");
    }
    else{
                printf("\n It is not a leap year");

    }


    return 0;
}