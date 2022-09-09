#include <stdlib.h>

#include <time.h>
#include <stdio.h>
/* more headers goes there */


/*
 * main - contains function
 * @n - number to be checked
 *
 * Description: checks positive or negative
 * Return : 0 if sucessful
*/

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
		if (n > 0)
		{
			printf("%d", n);
			printf("is postive\n");
		}
		else if (n == 0)
		{
			printf("%d", n);
			printf("is zero\n");
		}
		else
			printf("%d", n "is negative\n");

					return (0);

}
