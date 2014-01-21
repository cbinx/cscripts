// Nested for loops

#include <stdio.h>

int main (void)
{

        int n, number, triangularNumber, counter, count;

            printf ("What Counter number do you want? ");
            scanf ("%i", &counter);
        
        count = 1;
        while ( count <= counter ) {
	    count++;
            printf ("What triangular number do you want? ");
            scanf  ("%i", &number);

            triangularNumber = 0;
	    n = 1;

            while ( n <= number ) {
                 triangularNumber += n;
		 n++;
	    }

            printf ("Triangular number %i is %i\n\n", number, triangularNumber);
        }

        return 0;

}
