#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r, pow;
	int l = -1;

	if (b == NULL)
		return (0);

	while (b[++l])
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}

	pow = 1;
	r = 0;
	l--;
	while (l >= 0)
	{
		if (b[l] == '1')
			r += pow;
		pow = pow * 2;
		l--;
	}
	return (r);
}
