#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * using n bytes from src
 * @dest: a string
 * @src: the string that attaches to dest
 * @n: number of bytes used
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
