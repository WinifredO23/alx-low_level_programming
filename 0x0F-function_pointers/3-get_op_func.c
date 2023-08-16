#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects correct function to perform
 * @s: The opereator
 * Return: Pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add},
	{ "-", op_sub},
	{ "*", op_mul},
	{ "/", op_div},
	{ "%", op_mod},
	{ NULL, NULL},
	};

	int c = 0;

	while (ops[c].op != NULL)
	{
	if (*(ops[c].op) == *s && *(s + 1) == '\0')
	{
	return (ops[c].f);
	}
	c++;
	}
	return (NULL);
}
