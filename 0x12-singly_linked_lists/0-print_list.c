<<<<<<< HEAD
#include "lists.h"
/**
 * print_list - prints all the elements of a struct list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodeCount;

	nodeCount = 0;
=======
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements  a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t x;

	x = 0;

>>>>>>> 9757069da852d08101dd9c04c3bf4e9e93763373
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
<<<<<<< HEAD
		nodeCount++;
	}
	return (nodeCount);
=======
		x++;
	}
	return (x);
>>>>>>> 9757069da852d08101dd9c04c3bf4e9e93763373
}
