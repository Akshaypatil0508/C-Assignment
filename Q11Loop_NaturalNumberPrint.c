//11. Write a C program to print all natural numbers from 1 to n. - using while loop
#include<stdio.h>
void main()
{
	int num;
	int i=1;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Natural naumber between 1 to %d is :[",num);
	while(i<=num)
	{
		printf(" %d ",i);
		i++;
	}
	printf("]");
	
}
