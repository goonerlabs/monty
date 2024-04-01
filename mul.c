#include "monty.h"

/**
 * mul - multiplies the first and second node
 * @stack: pointer to head
 * @line_number: line number of the file
 *
 * Return: void
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *head;
	int res;

	head = *stack;
	tmp = *stack;

	if (tmp == NULL || tmp->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = tmp->next;
	res = tmp->n * head->n;
	tmp->prev = NULL;
	tmp->n = res;
	*stack = tmp;
	free(head);
}
