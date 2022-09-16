#include "main.h"
/**
 * _isupper - main function
 *
 * @c: unasigned char
 *
 * Return: 1(if c is uppercase), 0 otherewise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
