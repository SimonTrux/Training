#include "stack.h"
#include <stdio.h>

int	main(void)
{
	Stack sta = new_stack();
	print_stack(sta);

	sta = push_stack(sta, 14);
	sta = push_stack(sta, 42);
	sta = push_stack(sta, 20);
	sta = push_stack(sta, 98);
	print_stack(sta);

	sta = pop_stack(sta);
	print_stack(sta);


	if(is_empty_stack(sta))
		printf("La Pile est vide\n");
	else
		printf("La pile n'est pas vide\n");

	return (0);
}
