//Write a C program to invert the case of alphabet.

#include<stdio.h>                                                           
#include<ctype.h>                                                            
                                                                               
void main()                                                                     
{                                                                               
    char alph,revcase;                                                              
    printf("Please Enter an alphabet : ");                                             
    scanf("%c", &alph);                                                         
                                                                                
    if(islower(alph))                                                           
      revcase = toupper(alph);                                                      
    else                                                                        
      revcase = tolower(alph);                                                      
    printf("Reverse case of %c is : %c\n", alph, revcase);                        
                                                                                
}          
