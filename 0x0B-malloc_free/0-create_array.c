#include "main.h"
#include <stdlib.h>

/**
 * create_array - Funtion to create an array of chars
 * @size: size of array
 * @c: initializing character
 * Return: pointer to an array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	ptr[0] = c;
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
