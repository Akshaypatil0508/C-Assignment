//13. Write a C program to find sum of all even and odd numbers between 1 to n.
#include<stdio.h>
void main()
{
	int num,sumeven=0;
	int sumodd=0;
	int i=1;
    printf("enter the last number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
    	if(i%2==0)
		{
    	sumeven=sumeven+i;
    	
        }
        else 
        {
        	sumodd=sumodd+i;
        	
		}	
	}
	printf("\nSum of even number betwwen 1 to %d is: %d",num,sumeven);
	printf("\nSum of odd number between 1 to %d is: %d",num,sumodd);
}
