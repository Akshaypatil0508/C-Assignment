//16. Write a C program to enter a number and print its reverse.
#include <stdio.h>
void main()
{
int n, rev = 0, rem;
printf("\nEnter the number :");
scanf("%d", &n);
printf("\nReversed Number :" );
while(n != 0)
{
rem = n%10;
rev = rev*10 + rem;
n /= 10;
}

printf("%d",rev);
}
