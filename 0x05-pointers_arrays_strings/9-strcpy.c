#include "main.h"

/**
 * _strcpy - Function to copy string
 * @dest: Destination buffer
 * @src: source array
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (*src != NULL)
	{
		while (src[i])
		{
			dest[i]= src[i];
			i++;
		}
	}
	else
		*dest = NULL;
	return (dest);
}
