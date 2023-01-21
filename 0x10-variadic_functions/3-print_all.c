#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - Prints Anything
 * @format: List of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	char types[][] = {
		{c, char, "%c"},
		{i, int, "%d"},
		{f, float, "%f"},
		{s, char *, "%s"},
		{NULL, NULL, "(Nil)"}
	};
	int i = 0;
	int j = 0;
	void arg;

	va_list args;

	va_start(args, format);

	while (j < 9)
	{
		arg = va_arg(args, void);

		if (arg == NULL)
		{
			printf("(NIL)\n");
			return;
		}

		while (i < 5)
		{
			if (types[i][1] == typeof(arg))
			{
				printf(types[i][2], arg);
				break;
			}
		}
	}

}
