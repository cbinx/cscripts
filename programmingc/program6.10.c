// Program to generate a table of prime numbers

#include <stdio.h>
#include <stdbool.h>

int main (void)
{

	int 	p, d;
	bool	isPrime;

	// 2 is prime
	printf ("2  ");

	// Only test even numbers
	for ( p = 3; p <= 50; p +=2 ) 
	{
	    isPrime = true;

	    // only test odd divisors
	    for ( d = 3; d < p && isPrime == true; d +=2 )
		if ( p % d == 0 )
		    isPrime = false;

		if ( isPrime != false )
		    printf ("%i  ", p);
	    }
	    printf ("\n");
	    return 0;
}
