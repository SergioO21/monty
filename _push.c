#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	(void) line_number;

	new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(2);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*stack)
	{
		(*stack)->prev = new_node;
		new_node->next = *stack;
	}

	*stack = new_node;
}
