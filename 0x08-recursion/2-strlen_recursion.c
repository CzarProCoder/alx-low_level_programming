#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: String to be checked
 */

int _strlen_recursion(char *s)
{
	unsigned int i = 0;

	if ((*(s + i)) == '\0')
		return (0);
	return (i + _strlen_recursion(s++));
}
