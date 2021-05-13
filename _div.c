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
	int div = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		frees(*stack);
		exit(2);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		frees(*stack);
		exit(2);
	}

	div = (*stack)->next->n / (*stack)->n;

	delete = *stack;
	*stack = (*stack)->next;

	(*stack)->n = div;
	(*stack)->prev = NULL;

	delete->next = NULL;
	free(delete);
}
