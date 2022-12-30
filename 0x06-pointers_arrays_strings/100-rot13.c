#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: String to be encoded
 * Return: Encoded string
 */

char *rot13(char *str)
{
	char real_l[53] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot_l[53] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	int index = 0;
	int index2 = 0;

	while (str[index] != '\0')
	{
		while (real_l[index2] != '\0')
		{
			if (str[index] == real_l[index2])
			{
				str[index] = rot_l[index2];
			}
			index2++;
		}
		index++;
	}
	return (str);
}
