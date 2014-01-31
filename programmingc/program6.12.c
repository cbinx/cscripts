// Program that takes two integers and displays the result of diving the first integer by the second to 3 decimal places accuracy

#include <stdio.h>

int main (void)
{

	int n1, n2;

	printf ("Please enter two integers:\n");
	scanf ("%i %i", &n1, &n2);

	if ( n2 == 0 )
	  printf ("Division by zer0..naughty\n");
	else
	  printf ("%i / %i = %.3f\n", n1, n2, (float) n1 / n2);

	return 0;
}
