#include "main.h"
/**
 * print_alphabet_x10 - Write alphabet ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letter;
	int repeat = 0;

	while (repeat <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		repeat++;
		}
}
