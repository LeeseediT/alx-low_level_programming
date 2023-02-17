#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Aprogram to ceck if a number is
 * postive, negative or zero
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
return (0);
}
