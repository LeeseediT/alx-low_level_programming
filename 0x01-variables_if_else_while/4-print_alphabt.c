#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * expect for q and e
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && !='q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
