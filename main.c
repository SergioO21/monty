#include "monty.h"

/**
 * main - Main function.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Description: This is the main function of the Monty project.
 * Return: The success or error.
 *
 */


int main(int argc, char *argv[])
{
	FILE *monty_file;

	instruction_t instructions[] = {
		{"push", _push}, {"pall", _pall},
		{"pint", _pint}, {"pop", _pop},
		{"swap", _swap}, {"add", _add},
		{"sub", _sub}, {"div", _div},
		{"mul", _mul}, {"mod", _mod},
		{"pchar", _pchar}, {"nop", _nop},
		{"pstr", _pstr}
	};

	if (argc == 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(2);
	}

	monty_file = fopen(argv[1], "r");

	if (!monty_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(2);
	}

	parse_execute(monty_file, instructions);

	fclose(monty_file);

	return (0);
}

/**
 * parse_execute - This function parse lines from a text.m
 * @monty_file: File with monty steps to execute.
 * @instructions: All the list-displays from functions.
 * Return: nothing
 *
 */

void parse_execute(FILE *monty_file, instruction_t instructions[])
{
	unsigned int line_number = 1;
	stack_t *stack = NULL;
	char *token = NULL;
	char line[100];
	int i, enter;

	while (fgets(line, sizeof(line), monty_file))
	{
		enter = 0;

		token = strtok(line, LIMITERS);

		for (i = 0; i < 13; i++)
		{
			if (strcmp(token, instructions[i].opcode) == 0)
			{
				if (i == 0)
				{
					token = strtok(NULL, " \n");
					is_number(stack, line_number, token);
					n = atoi(token);
				}
				instructions[i].f(&stack, line_number);
				enter = 1;
			}
		}

		if (enter == 0 && token[0] != '#')
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
			frees(stack);
			exit(2);
		}
		line_number++;
	}
	frees(stack);
}

/**
 * frees - This function frees memory
 * @stack: stack.
 * Return: Nothing.
 */

void frees(stack_t *stack)
{
	stack_t *delete = NULL;

	while (stack)
	{
		delete = stack;
		stack = stack->next;
		free(delete);
	}
}

/**
 * is_number - Checks if a string is a number.
 *
 * @token: String to compare.
 * @stack: Stack.
 * @line_number: Line number.
 *
 * Return: Nothing.
 */

void is_number(stack_t *stack, unsigned int line_number, char *token)
{
	int i = 0;

	while (token[i])
	{
		if (token[i] < 48 && token[i] > 57)
		{
			fprintf(stderr, "L%d: usage: push integer", line_number);
			frees(stack);
			exit(2);
		}
		i++;
	}
}
