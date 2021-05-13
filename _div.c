#include "monty.h"

/**
 * _div - This function divides the second top element
 * of the stack by the top element of the stack.
 * @stack: Double pointer to the head of the Stack.
 * @line_number: Line number.
 *
 *
 * Return: Nothing.
 *
 */

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *delete = NULL;
	(void) line_number;
	int div = 0;

	div = (*stack)->next->n / (*stack)->n;

	delete = *stack;
	*stack = (*stack)->next;

	(*stack)->n = div;
	(*stack)->prev = NULL;

	delete->next = NULL;
	free(delete);
}
