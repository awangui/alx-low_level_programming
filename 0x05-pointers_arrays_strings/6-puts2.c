#include <stdio.h>
#include "main.h"
/**
 * puts2 - Prints chars
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	putchar('\n');
