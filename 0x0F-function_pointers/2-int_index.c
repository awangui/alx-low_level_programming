#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to the comparing function
 *
 * Return: index of first element that does not 
 * return 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0); i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i)
		}
	}

	return (-1);
}
