//19. Write a C program to find all factors of a number.
#include<stdio.h>
void main()
{
	int num;
	int i;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		printf(" %d ",i);
	}
}
