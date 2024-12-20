#include "push_swap.h"

/**
 * @brief shift up all elements of stackbby 1. The first element
 * becomes the last one.
 *
 * @param stack
 */
void	ps_rotate_list(t_ps_list *pslist)
{
	t_lst *next_first;
	t_lst *current_first;
	t_lst *current_last;

	if (pslist->len < 2)
		return;
	next_first = pslist->first->next;
	current_last = pslist->last;
	current_first = pslist->first;

	current_last->next = current_first;
	current_first->previous = current_last;
	pslist->first = next_first;
	pslist->last = current_first;

	pslist->first->previous = 0;
	pslist->last->next = 0;
}


/**
 * @brief rotate a - shift up all elements of stack a by 1. The first element
 * becomes the last one.
 *
 * @param stack
 */
void	ps_ra(t_stack *stack)
{
	ps_rotate_list(&(stack->a));
}

/**
 * @brief rotate b - shift up all elements of stack b by 1. The first element
 * becomes the last one.
 *
 * @param stack
 */
void	ps_rb(t_stack *stack)
{
	ps_rotate_list(&(stack->b));
}

/**
 * @brief ra and rb at the same time.
 *
 * @param stack
 */
void	ps_rr(t_stack *stack)
{
	ps_ra(stack);
	ps_rb(stack);
}
