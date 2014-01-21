// Program to calculate the absolute value of an integer

#include <stdio.h>

int main (void)
{

	int initial_int;
        
	printf ("Type in your number: ");
	scanf ("%i", &initial_int);
	
	if ( initial_int < 0 )
	     initial_int = -initial_int;

	printf ("The absolute value is %i\n", initial_int);

	return 0;
}
