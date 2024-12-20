#include "push_swap.h"

/**
 * @brief shift up all elements of stackbby 1. The first element
 * becomes the last one.
 *
 * @param stack
 */
void	ps_swap_list(t_ps_list *pslist)
{
	t_lst *next_first;
	t_lst *current_first;

	if (pslist->len < 2)
		return;
	next_first = pslist->first->next;
	current_first = pslist->first;

	current_first->previous = next_first;
	current_first->next = next_first->next;
	next_first->next = current_first;

	pslist->first = next_first;

	pslist->first->previous = 0;
	pslist->last->next = 0;
}

/**
 * @brief swap the first 2 elements at the top of stacka. Do nothing if thereis
 * only one or no elements
 *
 * @param lists
 */
void	ps_sa(t_stack *stack)
{
	ps_swap_list(&(stack->a));
}

/**
 * @brief swap b- swap the first 2 elements at the top of stackb.
 * Do nothing if thereis only one or no elements).
 *
 * @param lists
 */
void	ps_sb(t_stack *stack)
{
	ps_swap_list(&(stack->b));
}

/**
 * @brief sa and sb at the same time.
 *
 * @param lists
 */
void	ps_sss(t_stack *stack)
{
	ps_sa(stack);
	ps_sb(stack);
}
