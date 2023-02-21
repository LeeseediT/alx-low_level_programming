#include "main.h"
/**
 * main - A program that writes a function that
 * prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	char letter;
	int repeat = 0;

	while (repeat <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		repeat++;
		}
}
