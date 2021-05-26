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
	for(i=0;i<=size;i++)
    	{
    		sum=sum+arr[i];
		}
        printf("\nSum of array elements is: %d",sum);
    avg=sum/5;
    printf("\nAverage of array elemnts is : %d",avg);
    max=arr[0];
    	for(i=0;i<size;i++)
    	{
    		if(arr[i]>max)
    		max=arr[i];
		}
    printf("\nMaximum element in array is: %d",max);
    min=arr[0];
    	for(i=0;i<size;i++)
    	{
    		if(arr[i]<min)
    		min=arr[i];
		}
    printf("\nMinimum element in array is: %d",min);    
}
