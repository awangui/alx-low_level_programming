#include "main.h"
/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: int 1
 * @y: int 2
 *
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
