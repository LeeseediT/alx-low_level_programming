#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: where string is copied to
 * @src: source of string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
