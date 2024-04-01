#include "monty.h"

/**
 * no_op_err - prints an error message to stderr and exits the program
 * @p: pointer to a block of memory
 * @line: the line number of the file
 *
 * Return: void
 */

void no_op_err(char **p, int line)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line, p[0]);
	exit(EXIT_FAILURE);
}
