#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string pointer
 * Return: string length
 */
int _strlen(char *s)
{
	int strleng = 0;

	while (*s != '\0')
	{
		strleng++;
		s++;
	}
	return (strleng);
}
