//28. Write a C program to print all alphabets from a to z.

#include <stdio.h>

int main()
{
    char ch;

    printf("Alphabets from a - z Lowercase are: \n");
    for(ch='a'; ch<='z'; ch++)
    {
        printf(" %c ", ch);
    }
    //Upper case alphabets.
    printf("\n\nAlphabets from a - z Uppercase are: \n");
    for(ch='A'; ch<='Z'; ch++)
    {
        printf(" %c ", ch);
    }

    return 0;
}
