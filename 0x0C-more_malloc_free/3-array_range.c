#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: the smallest value
 * @max: the biggest integer
 * Return: pointer to new array or NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		array[i] = min++;

	return (array);
}
