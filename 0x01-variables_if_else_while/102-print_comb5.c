#include<stdio.h>

/**
 * main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int y;
	int z;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = (y + 1); z <= '9'; z++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(y);
					putchar(z);
					if (!((a == '9' && b == '8') && (y == '9' && z == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				z = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
