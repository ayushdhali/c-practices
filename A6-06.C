#include <stdio.h>

int main(){
int n, temp, d, rev = 0;

printf("Enter a number: ");
scanf("%d", &n);

temp = n;

while (temp != 0) {
    d = temp % 10;
    rev = rev * 10 + d;
    temp = temp / 10;
}

if (n == rev)
    printf("Palindrome number");
else
    printf("Not a palindrome number");





return 0;

}