//22. Write a C program to find LCM of two numbers.
#include <stdio.h>

void main()
{
    int i, num1, num2, max, lcm=1;

    /* Input two numbers from user */
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &num1, &num2);

    /* Find maximum between num1 and num2 */
    max = (num1 > num2) ? num1 : num2;

    /* First multiple to be checked */
    i = max;
    
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            
            lcm = i;
            break;
        }

        
        i =max+i;
    }

    printf("LCM of %d and %d = %d", num1, num2, lcm);
}
