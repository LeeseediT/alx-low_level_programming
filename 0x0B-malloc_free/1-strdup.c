#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a new memory space,
 * which contains a copy of the string given as a parameter.
 * @str: the string bein copied
 * Return: a pointer to new string or NULL if unsuccesful
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, length;

	i = 0;
	length = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));

	for (length = 0; str[length]; length++)
		new_str[length] = str[length];

	if (new_str == NULL)
		return (NULL);

	return (new_str);
}
