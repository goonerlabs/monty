#include "monty.h"

/**
 * push - adds a new node to the stack
 * @stack: the head of the stack
 * @line_number: line number of the file
 *
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node, *tmp;
	int i = 0;

	while (data_n[i])
	{
		if (data_n[i] > 57 || data_n[i] < 48)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->prev = NULL;
	node->n = atoi(data_n);
	node->next = NULL;
	if (!*stack)
	{
		*stack = node;
	}
	else
	{
		tmp = *stack;
		node->next = *stack;
		tmp->prev = node;
		*stack = node;
	}
}
