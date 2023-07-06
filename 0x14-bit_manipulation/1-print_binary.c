#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int s = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n; (tmp >>= 1) > 0; s++)
		;
	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			printf("1");
		else
			printf("0");
	}
}
