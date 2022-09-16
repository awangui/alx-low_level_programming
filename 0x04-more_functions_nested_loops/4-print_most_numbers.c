#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar('i');

		i++;
	}
	_putchar('\n');
}
