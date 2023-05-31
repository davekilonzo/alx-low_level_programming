#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: pointer to the string to print
 */
void puts_half(char *str)
{
	int len = 0;
	char *t = str;
	int i;
	int n;

	while (*t != '\0')
	{
		len++;
		t++;
	}
	n = (len + 1) / 2;
	for (i = n; i < len; i++)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
