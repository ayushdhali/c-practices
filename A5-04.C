#include <stdio.h>
int main()
{
    char marrital, gender;
    int age;
    printf("\n Tell us marrital status of the driver(U/M):");
    scanf(" %c", &marrital);

    if (marrital == 'U' || marrital == 'u')
    {
        printf("\n gender of the driver(M/F):  ");
        scanf(" %c", &gender);
        if (gender == 'M' || gender == 'm')
        {
            printf("\n Give age of driver:  ");
            scanf("%d", &age);
            if (age > 30)
            {
                printf("\n driver is insured:  ");
            }
            else
            {
                printf("\n driver is not insured:  ");
            }
        }
        else if (gender == 'F' || gender == 'f')
        {
            printf("\n Give age of driver:  ");
            scanf("%d", &age);
            if (age > 25)
            {
                printf("\n driver is insured:  ");
            }
                else {
                printf("\n driver is not insured:  ");
            }
        }
    }
    else if (marrital == 'M' || marrital == 'm')
    {
        printf("\n driver is insured:  ");
    }

    return 0;
}