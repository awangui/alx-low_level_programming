#include "main.h"
#include <stdio.h>
/**
 * _memset -  function that fills memory with a constant byte
 * @s: char s
 * @b: char b
 * @n: unassigned int
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
