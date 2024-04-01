#include "monty.h"

/**
 * rotr - rotates the stack
 * @stack: pointer to head
 * @line_number: line number of the file
 *
 * Description: The last node of the becomes the top node of the stack
 *
 * Return: void
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *tmp2;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	tmp = *stack;
	tmp2 = *stack;
	while (tmp->next)
	{
		tmp2 = tmp;
		tmp = tmp->next;
	}
	tmp2->next = NULL;
	tmp->prev = NULL;
	tmp->next = *stack;
	(*stack)->prev = tmp;
	*stack = tmp;
}
