#include "lists.h"
#include <stdio.h>

/**
 *list_len - Finds the number elements in
 *	     linked list_t list.
 *@h: The linked list_t list.
 *
 * Return: The return of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

