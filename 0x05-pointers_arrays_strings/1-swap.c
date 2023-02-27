#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: one of the integers
 * @b: the other integer
 */
void swap_int(int *a, int *b)
{
	int swop;

	swop = *a;
	*a = *b;
	*b = swop;
}
