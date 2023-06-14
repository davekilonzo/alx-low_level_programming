#include "main.h"

/**
 * factorial - return factorial of a given number n
 * @n: number to calculate factorial of
 *
 * Return: the factorial of n, -1 if negative and 0
 * if positive
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
