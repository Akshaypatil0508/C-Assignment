//17. Write a C program to check whether a number is palindrome or not.
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number to check pallindrome or not:");
	scanf("%d",&num);
	int sum=0;
	int r,temp;
	temp=num;
	while(num>0)
	{
		r=num%10;
		sum=sum*10+r;
		num=num/10;
	}
	if(temp==sum)
	printf("\nThe number is Palindrome.");
	else
	printf("\nThe number is not Palindrome.");	
}
