#include "monty.h"

/**
 * _mul - This function subtracts the top element of the stack from
 * the second top element of the stack.
 * @stack: Double pointer to stack's head
 * @line_number: line_number
 *
 * Return: nothing.
 *
 */

void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *delete = NULL;
	int mul = 0;
	(void) line_number;

	mul = (*stack)->next->n * (*stack)->n;

	delete = *stack;
	*stack = (*stack)->next;

	(*stack)->n = mul;
	(*stack)->prev = NULL;

	delete->next = NULL;
	free(delete);
}
