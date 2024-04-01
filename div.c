#include "monty.h"

/**
 * _div - function that divides the second element of
 *	the stack by the first element of the stack.
 * @stack: pointer to the first node.
 * @line_number: present working line number of the file.
*/

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *head;
	int res;

	tmp = *stack;
	head = *stack;

	if (!(tmp) || !(tmp->next))
	{
		printf("L<%d>: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (tmp->next->n == 0)
	{
		printf("L<%d>: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	res = tmp->next->n / head->n;
	tmp->next->n = res;
	tmp->prev = NULL;
	*stack = tmp->next;
	free(head);
}
