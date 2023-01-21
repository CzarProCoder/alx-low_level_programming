#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 *		Followed by a new line
 * @separator: separates the strings
 * @n: Number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list strs;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		if ((va_arg(strs, char *)) != NULL)
			printf("%s", va_arg(strs, char *));
		else
			printf("nil");

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
