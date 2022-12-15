#include "main.h"

/**
 * _islower - Function to check for lowercase character
 * Return: Does not return any value (s)
 */

int _islower(int c)
{
	int result;

	if ((c >= 'a') && (c <= 'z'))
	{
		result = 0;
	}
	else
	{
		result = 1;
	}
	return (result);
}
