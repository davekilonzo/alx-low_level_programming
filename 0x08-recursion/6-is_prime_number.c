#include "main.h"
/**
 * is_prime - function to check if no is prime
 * @n: the number checked
 * @i: the curent number checked
 *
 * Return: 1 if nonumber is prime, 0 if not
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime(n, i + 1));
}
/**
 * is_prime_number - checks if the input is prime
 * @n: the number checked
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
