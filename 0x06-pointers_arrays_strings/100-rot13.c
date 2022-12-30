#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: String to be encoded
 * Return: Encoded string
 */

char *rot13(char *str)
{
	int real_l[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int rot_l[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	int index, index2;

	for (index = 0; str[index] != '\0'; index++)
	{
		for (index2 = 0; real_l[index2] != '\0'; index2++)
		{
			if (str[index] == real_l[index2])
			{
				str[index] = rot_l[index2];
			}
		}
	}
	return (str);
}
