#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	s3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;
	if (s1)
	{
		while (i < l1)
		{
			s3[i] = s1[i];
			i;
		}
	}

	if (s2)
	{
		while (i < (l1 + l2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
