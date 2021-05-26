//Accept a number and display whether its an Armstrong number.
#include<stdio.h>
void main()
{
	int num;
	int r,sum=0;
	printf("Display whether its an Armstrong number.");
	printf("\nEnter the number:");
	scanf("%d",&num);
	int temp=num;
	while(num>0)
	{
		r=num%10;
		num=num/10;
		sum=sum+r*r*r;
		
	}
	if(temp==sum)
	printf("\nNumber is Armstrong number.");
	else
	printf("\nNumber is  not Armstrong number.");
	
}
