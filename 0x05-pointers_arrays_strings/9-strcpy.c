#include "main.h"

/**
 * _strcpy - Function to copy string
 * @dest: Destination buffer
 * @src: source array
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
