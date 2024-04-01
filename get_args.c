#include "monty.h"

/**
 * get_args - splits strings into commands and arguments
 * @str: the string to be split
 * Return: a pointer to the comand and arguments
 */

char **get_args(char *str)
{
	int i = 0;
	char *tok;
	static char *args[64] = {NULL};

	tok = strtok(str, " \n\t\r");
	while (tok)
	{
		args[i] = tok;
		i++;
		tok = strtok(NULL, " \n\t\r");
	}
	return (args);
}
