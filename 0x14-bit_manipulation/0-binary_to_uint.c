#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r;
	int l, pow;

	if (!b)
		return (0);

	r = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, pow = 1; l >= 0; l--, pow *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			r += pow;
		}
	}

	return (r);
}
