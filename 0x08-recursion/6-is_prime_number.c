#include "main.h"
/**
 * is_prime_number - prints 1 if the input integer is a prime number
 * @n: integer to be checked
 *
 * Return: 1 if number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n % 2 == 1)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	is_prime_number(n + 1);
}
