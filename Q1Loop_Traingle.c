//Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
void main()
{
	int ang1,ang2,ang3;
	int sum=0;
	printf("Enter the angles of triangle :\n");
	scanf("%d%d%d",&ang1,&ang2,&ang3);
	sum=ang1+ang2+ang3;
	if(sum==180&&ang1>0&&ang2>0&&ang3>0)
	printf("traingle is valid.");
	else
	printf("traingle is not valid.");
}
