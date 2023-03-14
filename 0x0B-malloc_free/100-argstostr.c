#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: an array of arguments
 * Return: NULL if it fails or a pointer pinting to new string
 */
char *argstostr(int ac, char **av)
{
	int length, a, b, c = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[b][a] != '\0'; b++)
			length++;
	}
	length = length + ac;

	new_str = malloc(sizeof(char) * (length + 1));

	if (new_str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[b][a] != '\0'; b++)
		{
			new_str[c] = av[a][b];
			c++;
		}
		new_str[c] = '\n';
		c++;
	}
		return (new_str);
}
