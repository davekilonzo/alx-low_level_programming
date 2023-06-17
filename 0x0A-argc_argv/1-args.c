#include <stdio.h>
/**
 * main - number of arguments passed
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *  Return :always  0(success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
