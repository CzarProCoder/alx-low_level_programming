#include <stdio.h>

/**
 * main - Entry point
 * ch - Decalration of alphabet variable
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch == 'q') || (ch == 'e'))
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
