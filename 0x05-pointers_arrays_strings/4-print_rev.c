#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 */
void print_rev(char *s)
{
	int len = 0;
	char *t = s;
	int i;

	while (*t != '\0')
	{
		len++;
		t++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
