#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0 (Always succesful)
*/
int main(void)
{
printf("Size of a char: %d byte(s)\n", (int) sizeof(charType));
printf("Size of an int: %d byte(s)\n", (int) sizeof(intType));
printf("Size of a long int: %d byte(s)\n", (int) sizeof(longintType));
printf("Size of a float: %d byte(s)\n", (int) sizeof(floatType));
return (0);
}
