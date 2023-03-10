#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination of memory area
 * @src: source of memory area
 * @n: number of copies of memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < b; a++)
	{
	dest[a] = src[a];
n--;
	}
	return (dest);
}
