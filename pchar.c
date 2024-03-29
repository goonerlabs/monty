#include "monty.h"

/**
 * pchar - function that prints the char value at the
 *		top of the in a stack_t.
 * @stack: pointer to the top node of stack_t.
 * @line_number: present working line number of a Monty bytecodes file.
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
