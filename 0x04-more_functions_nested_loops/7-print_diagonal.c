#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @size: number of times the character \ should be printed
 */
void print_diagonal(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j == i)
					_putchar('#');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
