#include "main.h"

int * change_point(char *s1, char *s2)
{
}

/**
 * wildcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: 1 if identical; else 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && ((s2 + 1) != '\0') && (*s1 == '\0'))
		return (0);
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if  (*s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
