#include "monty.h"

/**
 * _mod - function that divides the second top element of
 *	the stack by the top element of the stack.
 * @stack: pointer to the top node of stack_t.
 * @line_number: present working line number of a Monty bytecodes file.
*/

void mod(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L<%d>: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next->n == 0)
	{
		printf("L<%d>: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n %= (*stack)->n;
	pop(stack, line_number);
}
