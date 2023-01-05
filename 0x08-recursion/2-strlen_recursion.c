#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: String to be checked
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	unsigned int sum = 0;

	if (*(s) == '\0')
	{
		return (sum);
	}
	sum = 1 + _strlen_recursion[s++];
}
