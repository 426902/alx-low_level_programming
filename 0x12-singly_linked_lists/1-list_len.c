#include "lists.h"
/**
 * list_len - Check the codr for Holberton School Students.
 * @h: name of the list
 * Return: the number of the nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t t = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		t++;
	}
	return (t);
}
