#ifndef	__STACK_H
# define __STACK_H
#include <stdlib.h>

typedef enum	Booleen
{
	False,
	True
}				Bool;

typedef struct StackElement
{
	int value;
	struct StackElement *next;
}StackElement, *Stack;

Stack	new_stack(void);
Bool	is_empty_stack(Stack st);
void	print_stack(Stack st);
Stack	push_stack(Stack st, int x);
Stack	pop_stack(Stack st);
Stack	clear_stack(Stack st);






#endif
