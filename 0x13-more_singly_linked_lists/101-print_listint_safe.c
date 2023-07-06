#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tn = NULL;
	const listint_t *ln = NULL;
	size_t c = 0;
	size_t n;

	tn = head;
	while (tn)
	{
		printf("[%p] %d\n", (void *)tn, tn->n);
		c++;
		tn = tn->next;
		ln = head;
		n = 0;
		while (n < c)
		{
			if (tn == ln)
			{
				printf("-> [%p] %d\n", (void *)tn, tn->n);
				return (c);
			}
			ln = ln->next;
			n++;
		}
		if (!head)
			exit(98);
	}
	return (c);
}
