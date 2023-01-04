#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: String to use
 * @to: String to be modified
 */

void set_string(char **s, char *to)
{
	int i, j;
	int s_len = 0;
	int to_len = 0;

	while (s[s_len] != '\0')
		s_len++;
	while (to[to_len] != '\0')
		to_len++;
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] == to[i];
	}
	while i < to_len
		s[i] = '\0';

}
