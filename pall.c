#include "monty.h"

/**
 * pall - prints all the elements of the stack
 * @stack: pointer to head
 * @line_number: line number
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *stack;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
