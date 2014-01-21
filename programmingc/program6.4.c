// Determining if a number is even or odd (Ver. 2)

#include <stdio.h>

int main (void)
{

	int number_to_test, remainder;

	printf ("Enter your number: ");
	scanf ("%i", &number_to_test);

	remainder = number_to_test % 2;

	if ( remainder == 0 )
	   printf ("%i is even\n", number_to_test);

	else

	   printf ("%i is odd\n", number_to_test);

	return 0;
}
