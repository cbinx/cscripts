// Convert Fahrenheit to Celsius

#include <stdio.h>

int main (void)
{

	int F = 27;			// Fahrenheit degrees
	int C = (F - 32) / 1.8;		// Formula C = (F - 32) / 1.8

	printf ("%i degrees \(F) equals %i degrees \(C)\n", F, C);

	return 0;

}
