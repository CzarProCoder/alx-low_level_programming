#include "main.h"

/**
 * _pow_recursion - Value of x raised to power y
 * @x: Value to be raised
 * @y: Power
 */

int _pow_recursion(int x, int y)
{
	multiple = 1;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (multiple);
	if (y == 1)
		return (x);
	else if (y > 0)
	{
		y -= 1;
		multiple = x * (_pow_recursion(x, y);
		return (multiple);
	}
}
