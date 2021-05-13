#include "monty.h"

/**
 * _pchar -  prints the char at the top of the stack,
 *
 * followed by a new line.
 *
 * @stack: Double pointer to the head of the Stack.
 * @line_number: line number.
 * Return: Nothing.
 */

void _pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *list = *stack;

	if (!list)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		frees(*stack);
		exit(2);
	}

	if (list->n >= 32 && list->n <= 126)
		printf("%c\n", list->n);

	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		frees(*stack);
		exit(2);
	}
}
