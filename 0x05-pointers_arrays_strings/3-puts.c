#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 *@str: string
 * Return: void
 */
void _puts(char *str)
{
	puts(*str, stdout);
	puts("\n", stdout);
}
