#include "monty.h"

/**
 * pstr - prints all strings in a stack
 * @stack: pointer to the head
 * @line_number: line number of the file
 *
 * Return: void
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->n > 127 || tmp->n <= 0)
			break;
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
