#include<stdio.h>
#include<stdlib.h>


int main(){
    int d,w,e,c,an;
    float r,b1=1000000.00,b2=50000,b3=100000,b4=500000,i;
    printf("\nGive your last 4 digit of your A/c no. \n(press 101 for exit ) \n  ");
    scanf("%d",&an);
    if((an !=0 ) && ( an==1357 || an==6469 || an ==9300 ||an==4018 || an==101)){
        
        switch(an){


        case 1357:
        printf("\n Nikhil Dhali please select your option");
            printf("\n1.Balence check \n2.deposit \n3.withdrwal \n4.re-investment \n5.exit \nplease select your option  ");
     scanf("%d",&c);
             switch(c){
        case 1:
        printf("\n balence  in your A/c is %f rupees",b1);
        break;

        case 2:
        printf("\n give the amount to be deposited: ");
        scanf("%d",&d);
        b1= b1+d;
        printf("\n balence after deposit is:%f rupees",b1);
        break;

        case 3:
        printf("\n give the amount to be withdrwal: ");
        scanf("%d",&w);
        if(b1>w){
        b1= b1-w;
        printf("\n balence after withdrawl is:%f rupees",b1);
        }
        else {
            printf("\n you don't have enough money,you have %f rupees",b1);
        }
        break;

        case 4:
        i=(b1*0.05*2);
        r=b1+i;
        printf("\nyou have balence %f rupees \nafter 2 years you will get %f rupees as interest \nand%f rupees as compunded principle ",b1,i,r);
        break;

        case 10:
       printf("\n exiting....");
       exit(0);
    }
        break;
        
        
        case 6469:
        printf("\n Pampa  Dhali Das please select your option");
            printf("\n1.Balence check \n2.deposit \n3.withdrwal \n4.re-investment \n5.exit \nplease select your option  ");
     scanf("%d",&c);
             switch(c){
        case 1:
        printf("\n balence  in your A/c is %f rupees",b2);
        break;

        case 2:
        printf("\n give the amount to be deposited: ");
        scanf("%d",&d);
        b2= b2+d;
        printf("\n balence after deposit is:%f rupees",b2);
        break;

        case 3:
        printf("\n give the amount to be withdrwal: ");
        scanf("%d",&w);
        if(b2>w){
        b2= b2-w;
        printf("\n balence after withdrawl is:%f rupees",b2);
        }
        else {
            printf("\n you don't have enough money,you have %f rupees",b2);
        }
        break;

        case 4:
        i=(b2*0.05*2);
        r=b1+i;
        printf("\nyou have balence %f rupees \nafter 2 years you will get %f rupees as interest \nand%f rupees as compunded principle ",b2,i,r);
        break;

        case 10:
       printf("\n exiting....");
       exit(0);
    }
        break;

        
        case 9300:
        printf("\n Ayush Dhali IDIB  please select your option");
            printf("\n1.Balence check \n2.deposit \n3.withdrwal \n4.re-investment \n5.exit \nplease select your option  ");
     scanf("%d",&c);
             switch(c){
        case 1:
        printf("\n balence  in your A/c is %f rupees",b3);
        break;

        case 2:
        printf("\n give the amount to be deposited: ");
        scanf("%d",&d);
        b3= b3+d;
        printf("\n balence after deposit is:%f rupees",b3);
        break;

        case 3:
        printf("\n give the amount to be withdrwal: ");
        scanf("%d",&w);
        if(b3>w){
        b3= b3-w;
        printf("\n balence after withdrawl is:%f rupees",b3);
        }
        else {
            printf("\n you don't have enough money,you have %f rupees",b3);
        }
        break;

        case 4:
        i=(b3*0.05*2);
        r=b3+i;
        printf("\nyou have balence %f rupees \nafter 2 years you will get %f rupees as interest \nand%f rupees as compunded principle ",b3,i,r);
        break;

        case 10:
       printf("\n exiting....");
       exit(0);
    }
        break;

        
        case 4018:
        printf("\n Ayush Dhali SBI please select your option");
            printf("\n1.Balence check \n2.deposit \n3.withdrwal \n4.re-investment \n5.exit \nplease select your option  ");
     scanf("%d",&c);
             switch(c){
        case 1:
        printf("\n balence  in your A/c is %f rupees",b4);
        break;

        case 2:
        printf("\n give the amount to be deposited: ");
        scanf("%d",&d);
        b4= b4+d;
        printf("\n balence after deposit is:%f rupees",b4);
        break;

        case 3:
        printf("\n give the amount to be withdrwal: ");
        scanf("%d",&w);
        if(b4>w){
        b4= b1-w;
        printf("\n balence after withdrawl is:%f rupees",b4);
        }
        else {
            printf("\n you don't have enough money,you have %f rupees",b4);
        }
        break;

        case 4:
        i=(b1*0.05*2);
        r=b1+i;
        printf("\nyou have balence %f rupees \nafter 2 years you will get %f rupees as interest \nand%f rupees as compunded principle ",b4,i,r);
        break;

        case 10:
       printf("\n exiting....");
       exit(0);
    }
        break;

        case 101:
        printf("\nexiting...");
        exit(0);

        
       

    }
}
else {
    printf("you are not a user\n");
}


        

        
     

    
    
    
    return 0;

}