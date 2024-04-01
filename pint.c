#include "monty.h"

/**
 * pint - function that prints the first element.
 * @stack: pointer to the head.
 * @line_number: present working line number of the file.
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
