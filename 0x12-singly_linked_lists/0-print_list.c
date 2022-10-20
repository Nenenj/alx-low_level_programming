#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the start of the list
 *
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;

	unsigned int 1;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
		return (i);
}
