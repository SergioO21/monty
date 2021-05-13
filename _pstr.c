#include "monty.h"

/**
 * _pstr -  prints the string starting at the top of the stack,
 *
 * followed by a new line.
 *
 * @stack: Double pointer to the head of the Stack.
 * @line_number: line number.
 * Return: Nothing.
 */

void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *list = *stack;
	(void) line_number;

	while (list)
	{
		if (list->n >= 32 && list->n <= 126)
			printf("%c", list->n);

		else
			break;

		list = list->next;
	}

	printf("\n");
}
