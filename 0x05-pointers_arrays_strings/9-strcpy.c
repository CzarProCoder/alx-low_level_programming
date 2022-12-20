#include "main.h"

/**
 * _strcpy - Function to copy string
 * @dest: Destination buffer
 * @src: source array
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	return (dest);
}
