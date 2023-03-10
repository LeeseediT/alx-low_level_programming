#include "main.h"
/**
 * _isalpha - Checks alphabetic character
 * @let: The character that is checked
 * Return: 1 for alphabetic character and 0 for other
 */
int _isalpha(int let)
{
	if ((let >= 65 && let <= 90) || (let >= 97 && let <= 122))
	{
		return (1);
	}
	return (0);
}
