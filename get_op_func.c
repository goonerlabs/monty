#include "monty.h"

/**
 * get_op_func - gets the aplicable function based on the operator
 * @s: the operator
 *
 * Return: pointer to the function or NULL if no function was found
 */

void (*get_op_func(char *s))(stack_t **h, unsigned int line_number)
{
	int i = 0;
	instructions_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", div},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};
	while (op[i].opcode)
	{
		if (strcmp(op[i].opcode, s) == 0)
			return (op[i].f);
		i++;
	}
	return (NULL);
}
