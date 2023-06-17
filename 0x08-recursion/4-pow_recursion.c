#include "main.h"
/**
 * _pow_recursion - calculates the power of a number
 * @a: the number to calculate its power
 * @y: number to be raised by
 *
 * Return: returns the power of the number
 */
int _pow_recursion(int a, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (a * _pow_recursion(a, y - 1));
	}
}
