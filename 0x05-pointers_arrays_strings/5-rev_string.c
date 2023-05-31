#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 */
void rev_string(char *s)
{
	int len = 0;
	char *t = s;
	char tmp;
	int i;

	while (*t != '\0')
	{
		len++;
		t++;
	}
	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = tmp;
	}
}
