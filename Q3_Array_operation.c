/*Write a program to create an array of integers and 
perform following operations on that array like 
finding the sum, average, maximum and minimum number in that array.
Accept the numbers of the array from user.*/
#include<stdio.h>
void main()
{
	int i,choice,avg,max,min;
	int size;
	int sum=0;
	int arr[5];
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("Enter the array elements:");
	for(i=0;i<size;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	printf("array elements are:");
	for(i=0;i<size;i++)
	{
		printf("\t%d",arr[i]);
	}
	 printf(" \n1.Addition\n 2.Average\n 3.Maximum\n 4.Minimum\n");
	 printf("Enter your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1	:
    	for(i=0;i<=size;i++)
    	{
    		sum=sum+arr[i];
		}
        printf("Sum of array elements is: %d",sum);
        break;
    case 2	:
    	avg=sum/5;
        printf("Average of array elemnts is : %d",avg);
        break;
    case 3	:
    	max=arr[0];
    	for(i=0;i<size;i++)
    	{
    		if(arr[i]>max)
    		max=arr[i];
		}
        printf("Maximum element in array is %d",max);
        break;
    case 4	:
        min=arr[0];
    	for(i=0;i<size;i++)
    	{
    		if(arr[i]<min)
    		min=arr[i];
		}
        printf("Minimum element in array is %d",min);
        break;
    default	:
        printf(" Enter Your Correct Choice.");
        break;
    }
	
}
