// Program to reverse the digits of a number (revised)   
  
#include <stdio.h>  
#include <stdbool.h>  
  
int main (void)  
{  
    int   number, right_digit;  
    bool  isNegative = false;  
  
    printf ("Enter your number.\n");  
    scanf ("%i", &number);  
  
    /* if keyed-in number is negative, make it 
       positive, but remember it was negative */  
  
    if ( number < 0 ) {  
        number = -number;  
        isNegative = true;  
    }  
  
    do {  
        right_digit = number % 10;  
        printf ("%i", right_digit);  
        number = number / 10;  
    }  
    while ( number != 0 );  
  
    if (isNegative == true)  
        printf ("-");  
  
    printf ("\n");  
    return 0;  
}  
