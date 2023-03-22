#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: an array where element 
 * @size: size of array
 * @action: a pointer to the function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
