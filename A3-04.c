#include<stdio.h>
int main(){
   
    int s,g;
    float c;
    //s = sales,g=grade,c=comission
    printf("\n give the sales amount and grade ");
    scanf("%d" "%d",&s,&g);

    if(s>=12000 && g>5){
        c=s*0.235 ; //tor bara jodi ei equation bujhte comment dekhte lage thle porasona chere de
        printf("\n commission will be: %f",c);
    }
    else if(s>=12000 && g>3){
        c=s*0.23 ; //tor bara jodi ei equation bujhte comment dekhte lage thle porasona chere de
        printf("\n commission will be: %f",c);
    }
    else if(s<12000 && g>5){
        c=s*0.224 ; //tor bara jodi ei equation bujhte comment dekhte lage thle porasona chere de
        printf("\n commission will be: %f",c);
    }
    else
    c= s*0.218;
    printf("\n The commision will be: %f",c);
    
    
    return 0;
}