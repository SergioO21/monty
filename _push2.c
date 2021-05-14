#include "monty.h"

/**
 * _push2 - This function pushes an element to the queue.
 *
 * @stack: Double pointer to the head of the queue.
 * @line_number: line number.
 * Return: Nothing.
 *
 */

void _push2(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node, *list;
	(void) line_number;

	new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(2);
	}

	list = *stack;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!*stack)
		*stack = new_node;

	else
	{
		while (list->next)
			list = list->next;

		list->next = new_node;
		new_node->prev = list;
	}
}
