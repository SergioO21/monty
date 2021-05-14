#include "monty.h"

/**
 * _rotr - Rotates the stack to the bottom.
 *
 * @stack: Double pointer to the head of the Stack.
 *
 * @line_number: line number.
 *
 * Return: nothing.
 *
 */

void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *list = NULL;
	(void) line_number;

	list = *stack;

	if (!*stack || !(*stack)->next)
		return;

	while (list->next)
		list = list->next;

	list->prev->next = NULL;
	list->prev = NULL;
	list->next = *stack;
	(*stack)->prev = list;
}
