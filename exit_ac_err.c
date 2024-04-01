#include "monty.h"

/**
 * exit_ac_err - prints to standard error and exits
 * @ac: the argument count
 * Return: void
 */

void exit_ac_err(int ac)
{
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
