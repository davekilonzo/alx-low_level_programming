#include <stddef.h>
#include "calc.h"
/**
 * get_op_func - selects the correct function to perform the operation asked by the user
 * @s: operator string
 *
 * Return: pointer to the correct function, or NULL if operator not found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op; i++)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
	}
	return (NULL);
}
