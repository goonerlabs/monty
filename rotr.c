#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to the head of the stack
 * @line_number: line number of the bytecode file
 *
 * Description: The last node of the becomes the top node of the stack
 *
 * Return: void
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *temp2;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	temp = *stack;
	temp2 = *stack;
	while (temp->next)
	{
		temp2 = temp;
		temp = temp->next;
	}
	temp2->next = NULL;
	temp->prev = NULL;
	temp->next = *stack;
	(*stack)->prev = temp;
	*stack = temp;
}
