#include "stack.h"
#include <stdio.h>

Stack new_stack(void)
{
	return (NULL);
}

Bool is_empty_stack(Stack st)
{
	if (st == NULL)
		return (True);
	return (False);
}

Stack push_stack(Stack st, int x)
{
	StackElement *element;
	if (!(element = malloc(sizeof(*element))))
		return (NULL);
	element->value = x;
	element->next = st;

	return (element);
}

Stack	pop_stack(Stack st)
{
	StackElement *element;

	if (is_empty_stack(st))
		return new_stack();

		element = st->next;
		free(st);

		return (element);
}

void	print_stack(Stack st)
{
	if (is_empty_stack(st))
	{
		printf("Rien a afficher, la pile est vide.\n");
		return;
	}
	while (!(is_empty_stack(st)))
	{
		printf("[value : %d]\n", st->value);
		st = st->next;
	}
} 

Stack	clear_stack(Stack st)
{
	StackElement *element;

	if(is_empty_stack(st))
		return (new_stack());
	
	element = st->next;
	free(st);

	return (clear_stack(element));
}
