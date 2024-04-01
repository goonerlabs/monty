#include "monty.h"

/**
 * end_str - ends a string with a null byte
 * @str: string
 * @size: string length
 *
 * Return: void
 */

void end_str(char *str, int size)
{
	if (str[size - 1] == '\n')
		str[size - 1] = '\0';
}

