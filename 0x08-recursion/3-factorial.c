#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: number to check for factorial
 *
 * Return: factorial if successful, -1 if erroneous
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
