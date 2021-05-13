#include "monty.h"

/**
 * handle1 - Handle errors.
 *
 * @stack: Stack.
 * @line_number: Line number.
 * @m_file: Monty file.
 * @i: Instruction.
 *
 * Return: Nothing.
 */

void handle1(stack_t **stack, unsigned int line_number, FILE *m_file, int i)
{
	int execute = 0;

	/* Pint */
	if (i == 2)
	{
		if (!*stack)
		{
			fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
			execute = 1;
		}
	}

	/* Pop */
	else if	 (i == 3)
	{
		if (!*stack)
		{
			fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
			execute = 1;
		}
	}

	if (execute == 0)
		execute = handle2(stack, line_number, i);

	if (execute == 0)
		execute = handle3(stack, line_number, i);

	if (execute == 0)
		execute = handle4(stack, line_number, i);

	if (execute == 1)
	{
		frees(*stack);
		fclose(m_file);
		exit(EXIT_FAILURE);
	}
}

/**
 * handle2 - Handle errors.
 *
 * @stack: Stack.
 * @line_number: Line number.
 * @i: Instruction.
 *
 * Return: (1) If true error. Otherwise returns (0).
 */

int handle2(stack_t **stack, unsigned int line_number, int i)
{
	/* Mul */
	if (i == 8)
	{
		if (!*stack || !(*stack)->next)
		{
			fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
			return (1);
		}
	}

	/* Swap */
	else if (i == 4)
	{
		if (!*stack || !(*stack)->next)
		{
			fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
			return (1);
		}
	}

	/* Add */
	else if (i == 5)
	{
		if (!*stack || !(*stack)->next)
		{
			fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
			return (1);
		}
	}

	return (0);
}

/**
 * handle3 - Handle errors.
 *
 * @stack: Stack.
 * @line_number: Line number.
 * @i: Instruction.
 *
 * Return: (1) If true error. Otherwise returns (0).
 */

int handle3(stack_t **stack, unsigned int line_number, int i)
{
	/* Sub */
	if (i == 6)
	{
		if (!*stack || !(*stack)->next)
		{
			fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
			return (1);
		}
	}

	/* Div */
	else if (i == 7)
	{
		if (!*stack || !(*stack)->next)
		{
			fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
			return (1);
		}

		else if ((*stack)->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			return (1);
		}
	}
	return (0);
}

/**
 * handle4 - Handle errors.
 *
 * @stack: Stack.
 * @line_number: Line number.
 * @i: Instruction.
 *
 * Return: (1) If true error. Otherwise returns (0).
 */

int handle4(stack_t **stack, unsigned int line_number, int i)
{
	/* Mod */
	if (i == 9)
	{
		if (!*stack || !(*stack)->next)
		{
			fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
			return (1);
		}

		if ((*stack)->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			return (1);
		}
	}

	/* Pchar */
	else if (i == 10)
	{
		if (!*stack)
		{
			fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
			return (1);
		}

		if ((*stack)->n < 32 || (*stack)->n > 126)
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
			return (1);
		}
	}
	return (0);
}
