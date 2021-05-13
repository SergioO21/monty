#include "monty.h"

/**
 * _sub - subtracts the top element of the stack
 *
 *  @stack: Double pointer to the head of the Stack.
 * @line_number: line number.
 *
 * Return: Nothing.
 *
 */

void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *delete = NULL;
	(void) line_number;
	int sub = 0;

	sub = (*stack)->next->n - (*stack)->n;

	delete = *stack;
	*stack = (*stack)->next;

	(*stack)->n = sub;
	(*stack)->prev = NULL;

	delete->next = NULL;
	free(delete);
}
