#include "main.h"
/**
 * print_most_numbers - function that prints the numbers from 0 to 9
 * Return: numbers 0 to 9 excluding 4 and 2
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50)
		{
			if (num != 52)
			{
				_putchar(num);
			}
		}
	}
	_putchar('\n');
}
