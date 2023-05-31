#include "main.h"
#include <unistd.h>
/**
 * _putchar - writest the characters c to stdout
 * @c: The character to print
 *
 * Return: ON sucess 1
 * on error, -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

