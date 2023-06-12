#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, l, f, digit;

	i = -1;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	digit = 0;

	while (s[l] != '\0')
		l++;

	while (++i < l && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
	}

	if (f == 0)
		return (0);
	return (n);
}
/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int s, n, i, j, k;

	s = 0;
	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
			j++;
		}
	}

	k = 0;
	while (++k < argc)
	{
		n = _atoi(argv[k]);
		if (n >= 0)
			s += n;
	}

	printf("%d\n", s);
	return (0);
}
