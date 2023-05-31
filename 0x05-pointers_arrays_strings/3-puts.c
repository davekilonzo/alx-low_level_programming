#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: The string to print
 * Return: Void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
