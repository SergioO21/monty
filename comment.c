#include "monty.h"

/**
 * comment - Check if token is a comment or not.
 *
 * @head: Stack.
 * @ln: Line number.
 * @tk: Token.
 * @file: Monty file.
 * @enter: Execute case.
 *
 * Return: Nothing.
 */

void comment(stack_t *head, unsigned int ln, char *tk, FILE *file, int enter)
{
	if (enter == 0 && tk[0] != '#')
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", ln, tk);
		frees(head);
		fclose(file);
		exit(EXIT_FAILURE);
	}
}
