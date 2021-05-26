//18. Write a C program to find power of a number using for loop.
#include<stdio.h>
void main()
{
	int num;
	int expo;
	int i=1;
	printf("Enter the number and its power :");
	scanf("%d%d",&num,&expo);
	int power=1;
	while(i<=expo)
	{
		power=power*num;
		i++;
	}
	printf("The power number %d is : %d ",num,power);
}
