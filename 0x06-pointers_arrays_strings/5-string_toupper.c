#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters to uppercase
 * Return: Uppercase String
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}
	return (str);
}
