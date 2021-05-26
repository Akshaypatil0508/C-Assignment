#include<stdio.h>
void main()
{
	int arr [100][100],max,i,j,d,c;
	printf("enter the no. of rows and column in array:");
	scanf("%d %d",&c,&d);
	printf("\nenter teh array elemnt=");
	for(i=0,i<c,i++)
	for(j=0,j<d,j++)
	scanf("%d",&arr[i][j]);
	max=arr[0][0];

  for (i = 0; i < c; i++)
    for (j= 0; j < d; j++)
      if (arr[i][j] > max)
        max=arr[i][j];

  printf("Maximum element in the matrix is %d\n", max);

  return 0;
}
