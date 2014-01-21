// Nested for loops

#include <stdio.h>

int main (void)
{

	int n, number, triangularNumber, counter, count;

	    printf ("What Counter number do you want? ");
	    scanf ("%i", &counter);

	for ( count = 1; count <= counter; ++count ) {
	    printf ("What triangular number do you want? ");
	    scanf  ("%i", &number);

	    triangularNumber = 0;

	    for ( n = 1; n <= number; ++n )
		 triangularNumber += n;

	    printf ("Triangular number %i is %i\n\n", number, triangularNumber);
	}

	return 0;

}
