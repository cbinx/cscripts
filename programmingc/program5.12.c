// Program that shows the special purpose of a decimal point in the field width specification in printf

#include <stdio.h>

int main (void)
{

	int dollars, cents, count;

	for ( count = 1; count <=10; count++ ) {
	    printf ("Enter dollars: ");
	    scanf ("%i", &dollars);
	    printf ("Enter cents: ");
	    scanf ("%i", &cents);
	    printf ("$%i.%.2i\n\n", dollars, cents);
	}

	return 0;
}
