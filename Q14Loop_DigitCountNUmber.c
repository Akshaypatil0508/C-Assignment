//14. Write a C program to count number of digits in a number.
#include<stdio.h>
void  main()
{
	int num;
	int count=0;
	printf("Enter the number to chek digits:");
	scanf("%d",&num);
	while(num>0)
	{
		num=num/10;
		count++;
	}
	printf("The number of digits in number %d is %d :",num,count);
}
