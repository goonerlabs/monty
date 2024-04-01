#include "monty.h"

char *data_n = NULL;

/**
 * main - entry point function for the interpreter for monty bytecode
 * @ac: the argument count
 * @av: the argument vector
 * Return: 0
 */

int main(int ac, char **av)
{
	FILE *file;
	char *code = NULL, **ptr;
	stack_t *stack = NULL;
	size_t i = 0;
	unsigned int line = 1;
	void (*op)(stack_t **, unsigned int);
	int len = 0;

	exit_ac_err(ac);
	file = fopen(av[1], "r");
	open_exit_err(file, av);
	while ((len = getline(&code, &i, file)) != -1)
	{
		end_str(code, len);
		ptr = get_args(code);
		if (ptr[0] && ptr[0][0] == '#')
			continue;
		op = get_op_func(ptr[0]);
		if (!op)
			no_op_err(ptr, line);
		if (ptr[1])
			data_n = ptr[1];
		op(&stack, line);
		line++;
	}
	free(code);
	_free(stack);
	fclose(file);
	return (0);
}
