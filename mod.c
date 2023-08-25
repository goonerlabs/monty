#include "monty.h"

/**
 * mod - function that finds the remainder between the second top 
 *	element of the stack by the top element of the stack.
 * @stack: pointer to the top node of stack_t.
 * @line_number: present working line number of a Monty bytecodes file.
*/

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *head;
	int res;

	temp = *stack;
	head = *stack;

	if (!(temp) || !(temp->next))
	{
		printf("L<%d>: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (temp->next->n == 0)
	{
		printf("L<%d>: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	res = temp->next->n % head->n;
	temp->next->n = res;
	temp->prev = NULL;
	*stack = temp->next;
	free(head);
}
