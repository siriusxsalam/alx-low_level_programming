#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *n;
	listint_t *tmp = *head;

	n = malloc(sizeof(listint_t));
	if (!n || !head)
		return (NULL);

	n->n = n;
	n->next = NULL;

	if (idx == 0)
	{
		n->next = *head;
		*head = n;
		return (n);
	}
	i = 0;
	while (tmp && i < idx)
	{
		if (i == idx - 1)
		{
			n->next = tmp->next;
			tmp->next = n;
			return (n);
		}
		else
			tmp = tmp->next;
		i++;
	}
	return (NULL);
}
