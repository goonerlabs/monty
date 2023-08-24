#include "monty.h"

/**
 * no_op_err - prints error and exists if no operator was found
 * @op: the operator function
 * @line_number: the line number
 *
 * Return: void
 */

void no_op_err(void (*op)(stack_t **, unsigned int), unsigned int line_number)
{
	if (!op)
	{
		fprintf(stderr, "L%u: unknown operator: %s\n", line_number, op);
		exit(EXIT_FAILURE);
	}
}
