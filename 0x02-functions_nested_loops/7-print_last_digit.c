#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @num: The number concerned
 * Return: The last digit of the number
 */
int print_last_digit(int num)
{
	int digit;

	digit = num % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit * '0');
	return (digit);
}
