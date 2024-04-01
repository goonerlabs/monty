#include "monty.h"

/**
 * get_op_func - gets a function based on the operator
 * @s: the operator
 *
 * Return: pointer to the function or NULL on failure
 */

void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"swap", swap},
		{"nop", nop},
		{"div", _div},
		{"sub", sub},
		{"mod", mod},
		{"pchar", pchar},
		{"mul", mul},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
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
