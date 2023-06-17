#include "main.h"

/**
 * is_prime_num -function to check if n is prime
 * @n: the number to check
 * @i: the current number
 *
 * Return: return n if prime
 */
int is_prime_num(int n, int i)
{
    if (n <= 1)
        return (0);
    if (n % i == 0)
        return (0);
    if (i * i > n)
        return (1);
    return (is_prime_num(n, i + 1));
}

/**
 * is_prime_number - return 1 if its prime, otherwise return 0
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    return (is_prime_num(n, 2));
}
