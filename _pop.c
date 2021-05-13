#include "monty.h"

/**
 * _pop - This function removes the top element of the stack.
 *
 * @stack: Double pointer to the head of the Stack.
 * @line_number: line number.
 *
 * Return: Nothing.
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *delete = *stack;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(2);
	}

	*stack = (*stack)->next;

	if (*stack)
		(*stack)->prev = NULL;

	delete->next = NULL;
	delete->prev = NULL;

	free(delete);
}
