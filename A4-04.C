#include<stdio.h>
#include<stdlib.h>

int main(){
    int d,w,e,c;
    float r,b=100000.00,i;
    printf("\n1.Balence check \n2.deposit \n3.withdrwal \n4.re-investment \n10.exit \nplease select your option  ");
     scanf("%d",&c);
     switch(c){
        case 1:
        printf("\n balence  in your A/c is %f rupees",b);
        break;

        case 2:
        printf("\n give the amount to be deposited: ");
        scanf("%d",&d);
        b= b+d;
        printf("\n balence after deposit is:%f rupees",b);
        break;

        case 3:
        printf("\n give the amount to be withdrwal: ");
        scanf("%d",&w);
        if(b>w){
        b= b-w;
        printf("\n balence after withdrawl is:%f rupees",b);
        }
        else {
            printf("\n you don't have enough money,you have %f rupees",b);
        }
        break;

        case 4:
        i=(b*0.05*2);
        r=b+i;
        printf("\nyou have balence %f rupees \nafter 2 years you will get %f rupees as interest \nand%f rupees as compunded principle ",b,i,r);
        break;

        case 10:
       printf("\n exiting....");
       exit(0);
       

        

        
     }

    
    
    
    return 0;

}