#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_unit - Convert binary to an unsigned int
 * @b: Pointer to the binary
 * Return: Converted number of 0 if:
 *		there is one of more chars that is not 0 or 1
 *		b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, index = 0, count = 0;

	if (b == NULL)
		return (0);
	while (b[0] != '\0')
	{
		index++;
	}
	while (b[count])
	{
		if ((b[count]) != '0' && (b[count] != '1'))
			return (sum);
		if (b[count] == '1')
			sum += (1 * (1 << index));
		count++;
		index--;
	}
	return (sum);
}
