#include "main.h"
/**
 * print_alphabet - main block
 *
 * Return: 0 always
**/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

}
