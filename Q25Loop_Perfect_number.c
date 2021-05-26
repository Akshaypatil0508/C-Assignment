//25. Write a C program to check whether a number is Perfect number or not.
#include<stdio.h>
int main()
{
int i, num, sum = 0;

printf("Enter a number :");
scanf("%d", &num);
for(i=1; i<num; i++)
{
if(num%i == 0)
{
sum =sum+i;
}
}

if(sum == num)
{
printf("\n%d is a Perfect Number\n", num);
}
else
{
printf("\n%d is a Not Perfect Number\n", num);
}

return 0;
}


