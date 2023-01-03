#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination area
 * @src: Source area
 * @n: Bytes to be copied from src
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	long int i;

	for (i = 0; i < n: i++)
		src[i] = dest[i];
	return (dest);
}
