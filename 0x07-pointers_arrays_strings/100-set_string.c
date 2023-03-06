#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char
 * @to: pointer
 * @s: a pointer pointing to a pointer
 * Return:
 */
void set_string(char **s, char *to)
{
	*s = to;
}
