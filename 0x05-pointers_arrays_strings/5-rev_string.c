#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: a string
 * Return: the reverse of a string
 */
void rev_string(char *s)
{
	char reve = s[0];
	int length = 0, i = 0;

	while (s[length] != '\0')
		length++;

	for (i = length - 1; i >= length / 2; i--)
	{
		reve = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = reve;
	}
}
