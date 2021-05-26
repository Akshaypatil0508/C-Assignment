//Accept a number and display its sum of digits.
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	int sum=0;
	int r;
	while(num>0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("sum of digits is:%d",sum);
}
