#include "3-calc.h"
/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a1, a2, r;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && a2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	r = func(a1, a2);
	printf("%d\n", r);
	return (0);
}
