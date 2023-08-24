#include "monty.h"

/**
 * no_op_error - prints an error message and exits the program
 * @ptr: pointer to a block of memory on the heap
 * @line: the line number of the instruction
 *
 * Return: void
 */

void no_op_error(char **ptr, int line)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line, ptr[0]);
	exit(EXIT_FAILURE);
}
