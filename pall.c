#include "monty.h"

/**
 * pall - prints elements
 * @stack: stack pointer
 * @lineNumber: lineNumber
 * Return: void
 */

void pall(stack_t **stack, unsigned int __attribute__((unused)) lineNumber)
{
	stack_t *curr = *stack;

	if (!stack || !*stack)
	{
		return;
	}

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
