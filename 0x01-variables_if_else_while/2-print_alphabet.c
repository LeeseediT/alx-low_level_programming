#include <stdio.h>

/**
 * main - A program that writes the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
