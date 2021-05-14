#include "monty.h"

/**
 * _rotl - rotates the stack to the top.
 *
 * @stack: Double pointer to the head of the Stack.
 *
 * @line_number: line number.
 *
 * Return: nothing.
 *
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *list, *end;
	(void) line_number;

	list = end = *stack;

	if (!*stack || !(*stack)->next)
		return;

	while (list->next)
		list = list->next;

	list->next = end;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	end->next = NULL;
}
