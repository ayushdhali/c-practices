#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b, int c)
{
    return a + b + c;
}

int average(int a, int b, int c, int d, int e)
{
    return (a + b + c + d + e) / 5;
}

int square_area(int side)
{
    return side * side;
}

void square_area_without_argument(void)
{
    int side;

    printf("Enter value of side: ");
    if (scanf("%d", &side) != 1) {
        printf("Invalid input.\n");
        return;
    }

    printf("The area of the square = %d\n", square_area(side));
}

int is_even(int value)
{
    return value % 2 == 0;
}

int is_prime(int value)
{
    int i;

    if (value < 2) {
        return 0;
    }

    for (i = 2; i <= value / i; ++i) {
        if (value % i == 0) {
            return 0;
        }
    }

    return 1;
}

unsigned long long factorial(int value)
{
    unsigned long long result = 1;
    int i;

    for (i = 2; i <= value; ++i) {
        result *= (unsigned long long)i;
    }

    return result;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int choice;

    for (;;) {
        printf("\nChoose an option:\n"
               "1. Sum of 3 numbers\n"
               "2. Average of 5 numbers\n"
               "3. Area of a square (pass an argument)\n"
               "4. Area of a square (no argument)\n"
               "5. Check whether a number is even or odd\n"
               "6. Check whether a number is prime\n"
               "7. Find the factorial of a number\n"
               "8. Swap 2 numbers\n"
               "9. Exit\n"
               "Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return EXIT_FAILURE;
        }

        switch (choice) {
        case 1: {
            int a, b, c;

            printf("Enter 3 numbers: ");
            if (scanf("%d %d %d", &a, &b, &c) != 3) {
                printf("Invalid input.\n");
                return EXIT_FAILURE;
            }

            printf("The sum = %d\n", sum(a, b, c));
            break;
        }

        case 2: {
            int a, b, c, d, e;

            printf("Enter 5 numbers: ");
            if (scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) != 5) {
                printf("Invalid input.\n");
                return EXIT_FAILURE;
            }

            printf("The average = %d\n", average(a, b, c, d, e));
            break;
        }

        case 3: {
            int side;

            printf("Enter side of square: ");
            if (scanf("%d", &side) != 1) {
                printf("Invalid input.\n");
                return EXIT_FAILURE;
            }

            printf("The area = %d\n", square_area(side));
            break;
        }

        case 4:
            square_area_without_argument();
            break;

        case 5: {
            int value;

            printf("Enter an integer: ");
            if (scanf("%d", &value) != 1) {
                printf("Invalid input.\n");
                return EXIT_FAILURE;
            }

            printf("The number is %s\n", is_even(value) ? "even" : "odd");
            break;
        }

        case 6: {
            int value;

            printf("Enter an integer: ");
            if (scanf("%d", &value) != 1) {
                printf("Invalid input.\n");
                return EXIT_FAILURE;
            }

            printf("The number is %sprime\n",
                   is_prime(value) ? "" : "not ");
            break;
        }

        case 7: {
            int value;

            printf("Enter a non-negative integer (0-20): ");
            if (scanf("%d", &value) != 1 || value < 0 || value > 20) {
                printf("Please enter a number from 0 to 20.\n");
                return EXIT_FAILURE;
            }

            printf("The factorial is = %llu\n", factorial(value));
            break;
        }

        case 8: {
            int a, b;

            printf("Enter 2 integers: ");
            if (scanf("%d %d", &a, &b) != 2) {
                printf("Invalid input.\n");
                return EXIT_FAILURE;
            }

            printf("Before swap: %d, %d\n", a, b);
            swap(&a, &b);
            printf("After swap:  %d, %d\n", a, b);
            break;
        }

        case 9:
            printf("Program ended.\n");
            return EXIT_SUCCESS;

        default:
            printf("Enter a choice from 1 to 9.\n");
        }
    }
}