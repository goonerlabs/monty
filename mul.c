#include "monty.h"

/**
 * mul - calculates the product of the top two nodes on a stack
 * @stack: pointer to the head node of the stack
 * @line_number: line number of the bytecode file
 *
 * Return: void
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *head;
	int prod;

	head = *stack;
	temp = *stack;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = temp->next;
	prod = temp->n * head->n;
	temp->prev = NULL;
	temp->n = prod;
	*stack = temp;
	free(head);
}
