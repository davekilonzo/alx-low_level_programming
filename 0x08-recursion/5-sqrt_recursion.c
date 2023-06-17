#include "main.h"
/**
 * find_sqrt - function to evaluate the square rroot
 * @n: the number t find square root of
 * @i: the number being tested as a potential square root
 *
 * Return: return n if natural square root
 * and -1 if not natural square root
 *
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (find_sqrt(n, i + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root
 * @n: number to evaluate its square root
 *
 * Return: either n or -1 depending on the nature of the number found
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, 0));
	}
}
