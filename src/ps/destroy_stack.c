#include "push_swap.h"
#include <stdlib.h>

void ps_destroy_stack(t_stack *stack)
{
	if (stack)
	{
		lst_clear(&stack->a.first, 0);
		lst_clear(&stack->b.first, 0);
		free(stack);
	}
}
