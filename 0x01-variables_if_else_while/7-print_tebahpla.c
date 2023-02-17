#include <stdio.h>
/**
 * main - A program that reverses the alphabet
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
