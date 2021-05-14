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
	stack_t *list, *head, *turn;
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;

	list = head = *stack;

	while ((list->next)->next)
		list = list->next;
	turn = list->next;

	list->next = NULL;
	turn->prev = NULL;

	turn->next = head;
	head->prev = turn;
	*stack = turn;
}
