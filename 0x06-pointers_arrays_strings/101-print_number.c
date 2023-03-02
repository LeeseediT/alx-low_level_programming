#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int integer;

	integer = n;
	if (n < 0)
	{
		_putchar('-');
		integer = -n;
	}
	if (integer / 10 != 0)
	{
		print_number(integer / 10);
	}
	_putchar((integer % 10) + '0');
}
