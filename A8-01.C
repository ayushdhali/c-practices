#include <stdio.h>
int main()
{
    int i,n,c=0;
    printf("Enter the length of the sentence : \n");
    scanf("%d",&n);
    char arr[n];
    printf("Enter the sentence :\n");
    //gets("%c",&arr[n]);
    for(i=0;i<n;i++)
    {
        
        scanf("%c",&arr[i]);
        if(arr[i]=='A'||arr[i]=='a'||arr[i]=='E'||arr[i]=='e'||arr[i]=='I'||arr[i]=='i'||arr[i]=='O'||arr[i]=='o'||arr[i]=='U'||arr[i]=='u')
        c++;
    }
    printf("The number of vowels present = %d\n",c);
    return 0;
}