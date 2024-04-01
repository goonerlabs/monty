#include "monty.h"

/**
 * _free - frees a stack
 * @head: a pointer to the head of the stack
 * Return: void
 */

void _free(stack_t *head)
{
	stack_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
