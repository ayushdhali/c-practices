#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b, int c)
{
    return (a + b + c);
}

int avg(int a, int b, int c, int d, int e)
{
    return (a + b + c + d + e) / 5;
}

int sqa(int a)
{
    return a * a;
}

int sq()
{
    int a, area;
    printf("Enter value of side : ");
    scanf("%d", &a);
    area = a * a;
    printf("The area of Square = %d\n", area);
    return 0;
}

int evenodd(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}

int prime(int a)
{
    int c = 0, i;

    for (i = 1; i <= a; i++) {
        if (a % i == 0)
            c++;
    }

    if (c == 2)
        return 1;
    else
        return 0;
}

int fact(int a)
{
    int fact = 1, i;

    for (i = 1; i <= a; i++)
        fact = fact * i;

    return fact;
}

int swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;

    printf("%d is swapped with %d\n", a, b);
    return 0;
}

int main()
{
    int i, a1;

    printf("Choose 1 for sum of 3 digits\n"
           "Choose 2 for average of 5 numbers\n"
           "Choose 3 for area of square passing an argument\n"
           "Choose 4 for area of square without passing an argument\n"
           "Choose 5 to find out whether an integer is even or odd\n"
           "Choose 6 to find out whether an integer is prime or not\n"
           "Choose 7 to find factorial of a number\n"
           "Choose 8 to swap 2 numbers\n"
           "Choose 9 to exit the program\n");

    do {
        printf("Enter your choice:\n");
        scanf("%d", &a1);

        switch (a1) {
        case 1: {
            int s, a, b, c;

            printf("Enter 3 numbers:\n");
            scanf("%d %d %d", &a, &b, &c);
            s = sum(a, b, c);
            printf("The Sum = %d\n", s);
            break;
        }

        case 2: {
            int av, a, b, c, d, e;

            printf("Enter 5 numbers:\n");
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
            av = avg(a, b, c, d, e);
            printf("The Average = %d\n", av);
            break;
        }

        case 3: {
            int s, area;

            printf("Enter side of square:\n");
            scanf("%d", &s);
            area = sqa(s);
            printf("The Area = %d\n", area);
            break;
        }

        case 4:
            sq();
            break;

        case 5: {
            int eo, a;

            printf("Enter an integer:\n");
            scanf("%d", &a);
            eo = evenodd(a);

            if (eo == 1)
                printf("The number is even\n");
            else
                printf("The number is odd\n");
            break;
        }

        case 6: {
            int p, a;

            printf("Enter an integer:\n");
            scanf("%d", &a);
            p = prime(a);

            if (p == 1)
                printf("The number is Prime\n");
            else
                printf("The number is not Prime\n");
            break;
        }

        case 7: {
            int fac, a;

            printf("Enter an integer:\n");
            scanf("%d", &a);
            fac = fact(a);
            printf("The Factorial of a number is = %d\n", fac);
            break;
        }

        case 8: {
            int a, b;

            printf("Enter 2 integers:\n");
            scanf("%d %d", &a, &b);
            printf("Elements before swap are %d, %d\n", a, b);
            swap(a, b);
            break;
        }

        case 9:
            printf("The code has ended\n");
            exit(0);

        default:
            printf("Enter choice from 1-9\n");
        }
    } while (1);

    return 0;
}