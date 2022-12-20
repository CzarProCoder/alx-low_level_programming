#include "main.h"

/**
 * _strcpy - Function to copy string
 * @dest: Destination buffer
 * @src: source array
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (*src != NULL)
	{
		i = 0;

		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
		*dest = NULL;
	return (dest);
}
