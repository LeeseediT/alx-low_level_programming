#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program to assign a random number to a variable
 * then check if the number is bigger/smaller than 5 or zero
 * Return: 0
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	if (d > 5)
	{
		printf("Last digit of %d and %d is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("Last digit of %d and is %d 0\n", n, d);
	}
	else
	{
		printf("Last digit of %d and is %d less than 6 and not 0\n", n, d);
	}
	return (0);
}
