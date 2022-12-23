#include "main.h"

/*
 * _strncat - Function that concatenates two strings
 * @dest: First string
 * @src: Second string
 * @n: Bytes that should not be exceeded
 * Return: Returns a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int max;

	i = 0;
	max = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (max <= n)
	{
		if (*(src + max) != '\0')
		{
			dest[i] = src[max];
			i++;
			max++;
		}
	}
	return (dest);
}
