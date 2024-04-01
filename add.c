#include "monty.h"

/**
 * add - adds the first two nodes in a stack
 * @stack: a pointer to the head node of the stack
 * @line_number: the line of the file
 *
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *head;
	int sum;

	tmp = *stack;
	head = *stack;
	if (tmp == NULL || tmp->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = tmp->n + tmp->next->n;
	tmp = tmp->next;
	tmp->n = sum;
	tmp->prev = NULL;
	*stack = tmp;
	free(head);
}

