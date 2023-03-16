#include "main.h"
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously alocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of new memory block
 * Return: NULL or pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0  && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	old_p = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		p[i] = old_p[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = old_p[i];
	}
	free(ptr);
	return (p);
}
