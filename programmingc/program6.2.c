/* Program to calculate the average for a list of numbers (grades) 
   and also increment a counter if a number is less than a number (failing grades) */


#include <stdio.h>

int main (void)
{

	int	numberofGrades, i, grade;
	int	gradeTotal = 0;
	int	failureCount = 0;
	float	average;


	printf ("How many grades will you be entering? ");
	scanf ("%i", &numberofGrades);

	for ( i = 1; i <= numberofGrades; i++ ) {
	      printf ("Enter grade #%i: ", i);
	      scanf ("%i", &grade);

	gradeTotal = gradeTotal + grade;

	if ( grade < 65 )
	   failureCount++;
	}

	average = (float) gradeTotal / numberofGrades;

	printf ("\nGrade average = %.2f\n", average);
	printf ("Number of failures = %i\n", failureCount);

	return 0;
}  
