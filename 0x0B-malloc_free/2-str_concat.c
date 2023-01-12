#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *s3;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	k = i + j;
	s3 = malloc((k + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	i++;
	while (i <= k)
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	return (s3);
}
