#include "monty.h"

/**
 * swap - function swaps the first two elements of the stack.
 * @stack: pointer to head.
 * @line_number: current working line number of the file.
*/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int i;

	if (tmp == NULL || tmp->next == NULL)
	{
		printf("L<%d>: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	i = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = i;
}
