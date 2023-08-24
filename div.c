#include "monty.h"

/**
 * _div - function that divides the second top element of
 *	the stack by the top element of the stack.
 * @stack: pointer to the top node of stack_t.
 * @line_number: present working line number of a Monty bytecodes file.
*/

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int opr;

	if (tmp == NULL || tmp->next == NULL)
	{
		printf("L<%d>: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (tmp->next->n == 0)
	{
		printf("L<%d>: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	opr = tmp->next->n / tmp->n;
	pop(stack, line_number);
	(*stack)->n = opr;
}
