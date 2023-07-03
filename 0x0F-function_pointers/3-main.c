#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
int (*get_op_func(char *s))(int, int);

/**
 * main - entry point for program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", op(a, b));
	return (0);
}
