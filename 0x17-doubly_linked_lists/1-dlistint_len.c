#include "lists.h"

/**
 * dlistint_len - returns number of elements
 *
 * @h: head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cnt;
	
	cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
	
}
