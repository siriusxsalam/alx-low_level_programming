#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = -1;

	while (s[++i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, c, d1, d2, *r, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	r = malloc(sizeof(int) * l);
	if (!r)
		return (1);
	i = -1;
	while (++i <= l1 + l2)
		r[i] = 0;
	while (--l1 >= 0)
	{
		d1 = s1[l1] - '0';
		c = 0;
		l2 = _strlen(s2);
		while (--l2 >= 0)
		{
			d2 = s2[l2] - '0';
			c += r[l1 + l2 + 1] + (d1 * d2);
			r[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			r[l1 + l2 + 1] += c;
	}
	i = -1;
	while (++i < l - 1)
	{
		if (r[i])
			a = 1;
		if (a)
			_putchar(r[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	return (free(r), 0);
}
