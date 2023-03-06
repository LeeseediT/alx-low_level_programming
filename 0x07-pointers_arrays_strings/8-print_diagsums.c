#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array
 * @size: size of matrix
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int b;

	for (b = 0; b < size; b++)
	{
		sum_1 = sum_1 + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		sum_2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
