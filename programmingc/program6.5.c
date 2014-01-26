// Program to determine if a year is a leap year

#include <stdio.h>

int main (void)
{

	int year, rem_4, rem_100, rem_400;

	printf ("Enter the year to be tested: ");
	scanf ("%i", &year);

	rem_4 = year % 4;
	rem_100 = year % 100;
	rem_400 = year % 400;

        // Could have been done like this: if ( ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )

	if ( (rem_4 == 0 && rem_100 != 0) || rem_400 == 0 )
	   printf ("%i is a leapyear\n", year);

	else
	   
	   printf ("%i is not a leapyear\n", year);

	return 0;
}
