#include "maih.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min:From the value
 * @max: To this value
 * Return: An array of integers
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;
	int num;

	if (min > max)
		return (NULL);
	num = (max - min) + 1;
	arr = malloc(num * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
