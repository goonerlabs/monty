#include "monty.h"

/**
 * get_args - splits string into command and argument
 * @str: the string to be split
 * Return: a pointer to a block of memory containing the command and argument
 */

char **get_args(char *str)
{
	int i = 0;
	char *tok;
	static char *args[32] = {NULL};

	tok = strtok(str, " ");
	while (tok)
	{
		args[i] = tok;
		i++;
		tok = strtok(NULL, " ");
	}
	return (args);
}
