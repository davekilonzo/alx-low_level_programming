#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursions(s + 1));
}
/**
 * is_palindrome_helper - check if string is a palindrome
 * @s: the string to check
 * @start: the starting index
 * @end: the ending index
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome_helper(char *s, start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if a strig is a palindrome
 * @s: the string checked
 *
 * Return: 1 if c is a palindrome
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
