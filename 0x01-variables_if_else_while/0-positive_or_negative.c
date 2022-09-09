#include <stdlib.h>

#include <time.h>

/* more headers goes there */


/*
 * main - contains function
 * value - checks value of number
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
int value(n)
{
		if (n > 0)
		{
			printf("%d", n "is postive\n")
		}
		else if (n == 0)
		{
			printf("%d", n "is zero\n")
		}
		else
			printf("%d", n "is negative\n")

					return (0);
}
}
