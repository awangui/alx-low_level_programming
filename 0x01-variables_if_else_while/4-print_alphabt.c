#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - prints the allphabet except q and e
 *
 * Return: always 0.
 */
int main(void)

{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			if (letter != 'e' && letter != 'q')
				putchar(letter);
		}
		putchar('\n');
		return (0);

}
