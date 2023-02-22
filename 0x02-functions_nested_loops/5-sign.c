#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @num: The number that is being checked
 * Return: 1 for positive number and-1 for negative number and zero for zero
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (num == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

