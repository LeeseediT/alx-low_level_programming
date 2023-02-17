#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that assigns a random number to a variable
 * the output will check if the number is postive,negatiive or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0)
}
