#include "main.h"
/**
 * print_numbers - a function that prints numbers from 0 to 9
 * Return: 0 to 9
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
