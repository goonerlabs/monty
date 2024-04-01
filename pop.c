#include "monty.h"

/**
 * pop - removes the first element from the stack
 * @stack: the head of the stack
 * @line_number: the line number of the file
 *
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
}
