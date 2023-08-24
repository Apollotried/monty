#include "monty.h"

/**
 * pop - remove last
 * @stack: stack pointer
 * @lineNumber: nb of lines
 * Return: void
 */
void pop(stack_t **stack, unsigned int lineNumber)
{
	stack_t *end;

	if (!stack || !*stack)
	{
		printf("L%u: cant pop\n", lineNumber);
		exit(EXIT_FAILURE);
	}
	else
	{
		end = *stack;
		*stack = (*stack)->next;
		free(end);
	}
}
