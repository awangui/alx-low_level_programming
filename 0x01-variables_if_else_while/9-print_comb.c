#include <stdio.h>
#include <string.h>
#define N 10
/**
 * main - main block
 *
 * Return: 0 always
 **/
int main()
{
	int num[N];
	int *ptr;
	int temp;
	int i, n, j;
	printf("\n Now many number you want to enter:");
		scanf("%d", &n);
	printf("\n Enter a list of numbers to see all combinations:\n");
	for (i = 0; i < n; i++)
		scanf(
