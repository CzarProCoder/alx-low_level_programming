#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String containing characters
 * @c: Character to be located
 * Return: Pointer to character location or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
