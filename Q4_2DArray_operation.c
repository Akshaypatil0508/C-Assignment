/*Perform all the above operations for 2D arrays.*/
#include<stdio.h>
void main()
{
	int arr[10][10];
	int i,j,r,c;
	int max,min,sum=0;
	int avg;
	printf("\nenter the no of rows:");
	scanf("%d",&r);
	printf("\nenter the no of column:");
	scanf("%d",&c);
	printf("Enter the array element:");
	// accepting number
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		scanf("%d",&arr[i][j]);
		//printing array
	printf("\narray element are:");
		for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		printf("%d ",arr[i][j]);
		printf("\n");
	}
		//summation of array
   for(i=0;i<r;i++)
		for(j=0;j<c;j++)
    	{
    		sum=sum+arr[i][j];
		}
        printf("\nSum of array elements is: %d",sum);
    avg=sum/5;
    printf("\nAverage of array elemnts is : %d",avg);
    max=arr[0][0];
    	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
    	{
    		if(arr[i][j]>max)
    		max=arr[i][j];
		}
    printf("\nMaximum element in array is: %d",max);
    min=arr[0][0];
    	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
    	{
    		if(arr[i][j]<min)
    		min=arr[i][j];
		}
    printf("\nMinimum element in array is: %d",min);
}
