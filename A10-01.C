#include <stdio.h>
void swap(float* a, float* b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    float a,b;
    printf("Enter 2 numbers :\n");
    scanf("%f%f",&a,&b);
    printf("Before swapping the values are %.2f and %.2f \n",a,b);
    swap(&a,&b);
    printf("After swapping the values are %.2f and %.2f \n",a,b);
    return 0;
}