// This program takes two integers and prints out whether or not the first is evenly divisible by the second

#include <stdio.h>

int main (void)
{

	int value1, value2;

	printf ("Please enter two numbers.\n");
	scanf ("%i %i", &value1, &value2);
	
	if ( value2 == 0 )
	    printf ("Division by zero..naughty naughty\n");

	else if ( value1 % value2 == 0 )
	    	printf ("%i is divisible by %i\n", value1, value2);
	    else
	    	printf ("%i is not divisible by %i\n", value1, value2);

	return 0;
}
