#include "monty.h"

/**
 * _add - This function adds to the top two elements of the stack.
 * @stack: Double pointer to the head of the Stack.
 * @line_number: Line number.
 *
 *
 * Return: nothing
 *
 */

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *delete = NULL;
	(void) line_number;
	int sum = 0;

	sum = (*stack)->n + (*stack)->next->n;

	delete = *stack;
	*stack = (*stack)->next;

	(*stack)->n = sum;
	(*stack)->prev = NULL;

	delete->next = NULL;
	free(delete);
}
