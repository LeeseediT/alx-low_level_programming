#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: string to be added to first string
 * @n: number of bytes from s2
 * Return: NULL if function fails and returned pointer pointing to memory space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int leng1 = 0, leng2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[leng1] != '\0')
	{
		leng1++;
	}
	while (s2[leng2] != '\0')
	{
		leng2++;
	}
	if (n > leng2)
	{
		n = leng2;
		new_str = malloc(sizeof(char) * (leng1 + n + 1));
	}
	else
	{
	new_str = malloc(sizeof(char) * (leng1 + leng2 + 1));
	}
	if (!new_str)
	return (NULL);

	while (i < leng1)
	{
	new_str[i] = s1[i];
	}
	while (i < leng2 && i < (leng1 + n))
	new_str[i++] = s2[j++];
	while (n >= leng2 && i < (leng1 + leng2))
	new_str[i++] = s2[j++];
		new_str[i] = '\0';
		return (new_str);
}
