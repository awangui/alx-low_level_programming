#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - main block
 * Description : assigning a variable
 * Return : 0 always successful
*/
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
		int a = n[-1];
		if (a > 5)

			printf("Last digit of %s is %d and is greater than 5", n, a);
		if (a == 0)
			printf("Last digit of %s is %d and is 0", n, a);
					return (0);

}
