#include "lists.h"

/**
 * free_list - frees list_t
 * @head: begining of list_t
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *list_n;

	while ((list_n = head) != NULL)
	{
		head = head->next;
		free(list_n->str);
		free(list_n);
	}
}

