#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Write a function that concatenates two strings
 * @s1: first part of new string
 * @s2: second part of new string
 * Return: NULL if failaure or a pointer pointing toward concatated string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0, length = 0;
	int j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	length = i + j;
	new_str = malloc((sizeof(char) * length) + 1);

	if (new_str == NULL)
		return (NULL);

	j = 0;

	while (k < length)
	{
		if (k <= i)
			new_str[k] = s1[k];
		if (k >= i)
		{
			new_str[k] = s2[j];
			j++;
		}
		k++;
	}
	new_str[k] = '\0';
	return (new_str);
}
