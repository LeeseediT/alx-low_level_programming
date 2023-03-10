#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @letter: letter that is checked
 * Return: 1 for lowercase letter or 0 for other
 */
int _islower(int letter)
{
	if (letter >= 97 && letter <= 122)
	{
		return (1);
	}
	return (0);
}
