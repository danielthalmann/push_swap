#include "push_swap.h"

/**
 * @brief push a take the first element at the top of b and put it at the top
 * of a. Do nothing if bis empty.
 *
 * @param lists
 */
void	ps_pa(t_stack *stack)
{
	if (stack->a.len < 1)
		return;

	ps_add_front(&stack->b, stack->a.first->c_int);
	ps_del_front(&stack->a);
}

/**
 * @brief pb : push b - take the first element at the top of a and put it at the
 * top of b. Do nothing if a is empty.
 *
 * @param lists
 */
void	ps_pb(t_stack *stack)
{
	if (stack->b.len < 1)
		return;

	ps_add_front(&stack->a, stack->b.first->c_int);
	ps_del_front(&stack->b);
}
