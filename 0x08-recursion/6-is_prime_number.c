#include "main.h"
int find_prime(int n, int rep);

/**
 * is_prime_number - a function that identifies a prime number
 * @n: a number
 * Return: 1 if n is prime number and 0 of not
 */
int is_prime_number(int n)
{
	return (find_prime(n, 1));
}

/**
 * find_prime - a function to check if prime number is found
 * @n: a number
 * @rep: number of iterations
 * Return: 1 if n is prime number and 0 of not
 */
int find_prime(int n, int rep)
{
	if ((n / rep) < rep)
	{
		return (1);
	}
	if (n % rep == 0 && rep > 1)
	{
		return (0);
	}
	if (n <= 1)
	{
		return (0);
	}
	return (find_prime(n, rep + 1));
}
