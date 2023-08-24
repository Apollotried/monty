#include "monty.c"

/**
 * push - add first
 * @stack: stack pointer
 * @lineNumber: error
 * @n: n
 * Return: void
 */

void push(stack_t **stack, char *n, unsigned int lineNumber)
{
	stack_t *new = NULL;
	int j;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failes\n");
		exit(EXIT_FAILURE);
	}

	if (!n)
	{
		fprintf(stderr, "L%d: usage: push\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	for (j = 0; n[j]; j++)
	{
		if (j == 0 && n[j] == '-')
			continue;
		if (n[j] > 57 || n[j] < 48)
		{
			fprintf(stderr, "L%d: usage: push\n", lineNumber);
			exit(EXIT_FAILURE);
		}
	}

	new->n = atoi(n);
	new->next = NULL;
	new->prev = NULL;

	if (*stack)
	{
		new->next = *stack;
		(*stack)->prev = new;
	}
	*stack = new;
}
