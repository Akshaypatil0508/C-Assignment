//Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>
 
void main() 
{
   char ch;
 
   printf("\nEnter The Character : ");
   scanf("%c", &ch);
 
   if (ch >= 'A' && ch <= 'Z')
      printf("Character is Upper Case Letters");
   else
      printf("Character is Not Upper Case Letters");
   /*if (ch >= 65 && ch <= 90)
      printf("Character is Upper Case Letters");
   else
      printf("Character is Not Upper Case Letters");*/
 
}

