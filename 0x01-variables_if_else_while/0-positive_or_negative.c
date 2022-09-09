#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: a random number is assigned to the variable n
 * then the function checks if it's positive negative or equal to zero
 * Return : 0 if sucessful
*/
int main(void)
{
		int n;



		srand(time(0));
		n = rand() - RAND_MAX / 2;


		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
			printf("%d is negative\n", n);
		return (0);
}
