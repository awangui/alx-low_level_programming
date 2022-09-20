#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies the string
 * @src :source of string to be copied
 * @dest :destination
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
