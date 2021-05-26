//9. Write a C program to count total number of notes in given amount..

#include<stdio.h>
void main()
{
	int i,ammount;
	printf("enter the the ammount to check for notes :");
	scanf("%d",&ammount);
	int temp=ammount;
	int a[10]={2000,500,200,100,50,20,10,5,2,1};
	for(i=0;i<10;i++)
    {
    	printf("\n %d Notes is = %d", a[i], temp / a[i]);
 	    temp = temp % a[i];
	}	
}
