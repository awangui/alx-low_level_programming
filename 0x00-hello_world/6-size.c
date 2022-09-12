#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0 (Always succesful)
*/
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
