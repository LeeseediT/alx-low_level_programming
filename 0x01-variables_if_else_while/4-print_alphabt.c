#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * expect for q and e
 * Return: 0
 */

int main(void)
{
	char letter;

	letter = 'a';
	while
		(letter <= 'z') {
		if ((letter != 'q' && letter != 'e') && letter <= 'z')
			putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
