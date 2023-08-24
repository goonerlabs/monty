#include "monty.h"

/**
 * get_args - splits string into command and argument
 * @str: the string to be split
 * Return: a pointer to a block of memory containing the command and argument
 */

char **get_args(char *str)
{
	int i = 0, j = 0;
	char *tok;
	char **args;

	args = malloc(sizeof(char *) * strlen(str) + 1);
	if (!args)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	tok = strtok(str, " ");
	while (tok)
	{
		args[i] = tok;
		i++;
		tok = strtok(NULL, " ");
	}
	args[i] = NULL;
	return (args);
}
