#include "main.h"

/**
 * _islower - Function to check for lowercase character
 * Return: Does not return any value (s)
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
