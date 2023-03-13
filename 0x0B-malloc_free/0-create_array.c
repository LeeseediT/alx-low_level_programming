#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: the initalizing character used
 * Return: Null if size = 0 or failaure else return 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
