#include "search_algos.h"


/**
 * linear_search - Function to search for a value in an array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return:	Success: First index where the value is located
 *		Failure: Returns -1 if array is absent or NULL
 */


int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
		if (*(array + index) == value)
			return (index);

	return (-1);
}
