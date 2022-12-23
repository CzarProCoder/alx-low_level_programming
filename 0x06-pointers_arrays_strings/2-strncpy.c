#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: Destination string array
 * @src: Source string array
 * @n: Numbers of bytes
 * Return: Pointer to the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	int m;
	int src_count;

	src_count = 0;

	for (i = 0; src[i] != '\n'; i++)	/*Calculate number of characters in src string*/
	{
		src_count++;
	}
	
	if (src_count >= n)
	{
		for (j = 0; j <= n; j++)
		{
			dest[j] = src[j];
		}
	}
	else
	{
		for (m = 0; m <= src_count; m++)
		{
			dest[m] = src[m];
		}
		
		while (src_count <= n)
			{
				src_count++;
				dest[src_count] = '\n';
			}
	}
	return (dest);
}
