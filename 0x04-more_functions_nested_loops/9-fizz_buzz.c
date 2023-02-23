#include "main.h"
#include <stdio.h>

/**
 * main -  a program that prints the numbers from 1 to 100
 * multiples of three print Fizz
 * for the multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 == 0)
		{
			printf("Fizz");
		}
		else if (m % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((m % 3 == 0) && (m % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", m);
		}
		if (m != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

