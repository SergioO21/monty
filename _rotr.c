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
	stack_t *list, *head;
	(void) line_number;

	list = head = *stack;

	if (!stack || !*stack || !(*stack)->next)
		return;

	while (list->next)
		list = list->next;

	list->prev->next = NULL;
	list->prev = NULL;
	list->next = head;
	head->prev = list;
	
	*stack = list;
}
