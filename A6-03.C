#include<stdio.h>
int main(){
    int a,b,c,fa=1,fb=1,fc=1,sum=0,i;
    printf("\n Give a,b,c:  ");
    scanf("%d""%d""%d",&a,&b,&c);
  for(i=1;i<=a;i++){
    fa=fa*i;
  }
    for(i=1;i<=b;i++){
    fb=fb*i;
  }
    for(i=1;i<=c;i++){
    fc=fc*i;
  }
  sum = fa+fb+fc;
    printf("\n %d ",sum);


    return 0;
}