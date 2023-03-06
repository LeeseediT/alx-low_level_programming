#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: string in question
 * @needle: substring being located
 * Return: pointer beginning of substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *str = haystack;
		char *sub = needle;

		while (*str == *sub && *sub != '\0')
		{
			str++;
			sub++;
		}
		if (*sub == '\0')
			return (haystack);
	}
	return (0);
}
