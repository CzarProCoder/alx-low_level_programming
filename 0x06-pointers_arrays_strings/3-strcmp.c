#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	return (i - j);
}
