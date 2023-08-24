#include "monty.h"

/**
 * swap - function swaps the top two elements of the stack.
 * @stack: pointer to the top node of a stack_t.
 * @line_number: current working line number of a Monty bytecodes file.
*/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int data_s;

	if (tmp == NULL || tmp->next == NULL)
	{
		printf("L<%d>: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	data_s = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = data_s;
}
