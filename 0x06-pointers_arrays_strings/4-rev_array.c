#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int rev;
	int b;

	for (b = 0; b < n--; b++)
	{
		rev = b[a];
		a[b] = a[n];
		a[n] = rev;
	}
}
