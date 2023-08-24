#include "monty.h"

/**
 * open_exit_error - prints error and exits on open failure
 * @file: file to be opened
 * @av: argument vector
 *
 * Return: void
 */

void open_exit_error(FILE *file, char **av)
{
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
}
