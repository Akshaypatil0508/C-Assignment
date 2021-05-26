//12. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<stdio.h>
void main()
{
	int num;
	int i;
	printf("Enter the last number:");
	scanf("%d",&num);
	i=num;
	printf("Natural naumbers between 1 to %d is:{",num);
	while(i>=1)
	{
		printf(" %d ",i);
		i--;
	}
	printf("}");
}
