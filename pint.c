#include "monty.h"

/**
 * pint - function that prints the top value of in a stack_t.
 * @stack: pointer to the top node of stack_t.
 * @line_number: present working line number of a Monty bytecodes file.
*/
void pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL)
	{
		printf("L<%d>: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
