//Accept a number and display it multiplication table.
#include<stdio.h>
void main()
{
	int num,i,t;
	printf("Enter the number to display its table:");
	scanf("%d",&num);
	printf("table is:\n");
	for(i=1;i<=10;i++)
	{
		t=num*i;
		printf("%d \n",t);
	}
}
