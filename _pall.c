#include "monty.h"

/**
 * _pall - This function prints all the values on the stack,
 * starting from the top's stack.
 *
 * @stack: Double pointer to the stacks's head
 * @line_number: line number.
 *
 * Return: nothing.
 *
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *list = *stack;
	(void) line_number;

	while (list)
	{
		printf("%d\n", list->n);
		list = list->next;
	}
}
