#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, s;
	char *a;

	s = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i =  -1;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			s++;
			j++;
		}
		s++;
	}
	a = malloc((sizeof(char) * s) + 1);
	if (a == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			a[k] = av[i][j];
			j++;
			k++;
		}
		a[k] = '\n';
		k++;
	}
	a[k] = '\0';
	return (a);
}
