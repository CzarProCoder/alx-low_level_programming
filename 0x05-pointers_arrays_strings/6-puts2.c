#include "main.h"

/**
 * puts - Function to print every character of string
 * @str: String to be evaluated
 * @Return: void
 */

void puts2(char *str)
{
	int index = 0;
	len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
