#include <stdio.h>
/**
 * main - A program that prints all the numbers
 * of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char letter;

	int d;

	letter = 'a';
	d = 0;
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(letter <= 'f') {
			putchar(letter);
			letter++;
		}
	putchar('\n');
	return (0);
}
