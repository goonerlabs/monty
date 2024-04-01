#include "monty.h"

/**
 * pchar - function that prints the char value at the
 *	of the first element.
 * @stack: pointer to head.
 * @line_number: present working line number of the file.
*/

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
	{
		printf("L<%d>: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (tmp->n < 0 || tmp->n > 127)
	{
		printf("L<%d>: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", tmp->n);
}
