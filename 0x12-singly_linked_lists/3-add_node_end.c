#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *tmp = *head;
	unsigned int l = 0;

	while (str[l])
		l++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = l;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = n;
	return (n);
}
