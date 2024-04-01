#include "monty.h"

/**
 * rotl - rotates the stack
 * @stack: pointer to the head
 * @line_number: line number of the file
 *
 * Description: The top element of the stack becomes the last one,
 * and the second top element of the stack becomes the first one
 *
 * Return: void
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack, *head;
	(void)line_number;

	if (tmp == NULL || tmp->next == NULL)
		return;
	head = (*stack)->next;
	head->prev = NULL;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = tmp;
	*stack = head;
}
