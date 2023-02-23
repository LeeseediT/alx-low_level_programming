#include <math.h>
#include <stdio.h>
/**
 * main - a program that finds and prints the largest prime facto
 *  of the number 612852475143
 *  Return: 0
 */
int main(void)
{
	long a, prime;
	long num = 612852475143;
	double square_num = sqrt(num);

	for (a = 1; a <= square_num; a++)
	{
		if (num % a == 0)
		{
			prime = num / a;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
