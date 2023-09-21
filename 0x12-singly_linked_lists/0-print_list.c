#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function ...
 * @h: the list
 *
 * Return: 1 or 0
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	int cpt = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
		cpt++;
	}
	return (
