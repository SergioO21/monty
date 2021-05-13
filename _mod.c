#include "monty.h"

/**
 * _mod - computes the rest of the division of the
 * second top element of the stack by the top element of the stack.
 *
 * @stack: Double pointer to the head of the Stack.
 * @line_number: line number.
 *
 * Return: Nothing.
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *delete = NULL;
	(void) line_number;
	int mod = 0;

	mod = (*stack)->next->n % (*stack)->n;

	delete = *stack;
	*stack = (*stack)->next;

	(*stack)->n = mod;
	(*stack)->prev = NULL;

	delete->next = NULL;
	free(delete);
}
