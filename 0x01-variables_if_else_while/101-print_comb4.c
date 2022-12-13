#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int y;
	int z;

	for (a = '0'; a <= '9'; a++)
	{
		for (y = (a + 1); y <= '9'; y++)
		{
			for (z = (y + 1); z <= '9'; z++)
			{
				putchar(a);
				putchar(y);
				putchar(z);
				if ((a != '7') && (y != '8') && (z != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
