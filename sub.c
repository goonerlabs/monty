#include "monty.h"

/**
 * sub - subtracts the first node of the stack from the second node
 * @stack: pointer to head
 * @line_number: line number of the file
 *
 * Return: void
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *head;
	int res;

	tmp = *stack;
	head = *stack;

	if (!tmp || !(tmp->next))
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	res = tmp->next->n - head->n;
	tmp->next->n = res;
	tmp->prev = NULL;
	*stack = tmp->next;
	free(head);
}
