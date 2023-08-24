#include "monty.h"

/**
 * sub - subtracts the top node of the stack from the second top node
 * @stack: pointer to the head of the stack
 * @line_number: line number of the bytecode
 *
 * Return: void
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *head;
	int res;

	temp = *stack;
	head = *stack;

	if (!temp || !(temp->next))
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	res = temp->next->n - head->n;
	temp->next->n = res;
	temp->prev = NULL;
	*stack = temp->next;
	free(head);
}
