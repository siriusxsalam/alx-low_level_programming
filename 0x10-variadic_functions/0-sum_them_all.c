#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list l;

	va_start(l, n);
	i = 0;
	while (i++ < n)
		sum += va_arg(l, int);
	va_end(l);
	return (s);
}
