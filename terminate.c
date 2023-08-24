#include "monty.h"

/**
 * terminate - terminates a string with a null byte
 * @str: string to terminate
 * @size: size of the string
 *
 * Return: void
 */

void terminate(char *str, int size)
{
	if (str[size - 1] == '\n')
		str[size - 1] = '\0';
}

