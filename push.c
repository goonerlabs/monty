#include "monty.h"

/**
 * push - pushes a new node unto to the stack
 * @stack: stack
 * @line_number: line number
 *
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node, *temp;
	int i = 0;

	while (data_n[i])
	{
		if (!isdigit(data_n[i]))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			free(node);
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
		temp = *stack;
		node->next = *stack;
		temp->prev = node;
		*stack = node;
	}
}
