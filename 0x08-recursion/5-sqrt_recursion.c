#include "main.h"

int natural_sqrt(int n, int rep);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: a number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (natural_sqrt(n, 1));
}

/**
 * natural_sqrt - calculates the natural square root
 * @n: a number
 * @rep: repeating/ iterating
 * Return: the square root
 */
int natural_sqrt(int n, int rep)
{
	int sqrt = rep * rep;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (rep);
	}
	return (natural_sqrt(n, rep + 1));
}
