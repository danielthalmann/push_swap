/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthalman <daniel@thalmann.li>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 00:00:00 by dthalman          #+#    #+#             */
/*   Updated: 2024/12/20 00:00:00 by dthalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief shift up all elements of stackbby 1. The first element
 * becomes the last one.
 *
 * @param stack
 */
void	ps_r_rotate_list(t_ps_list *pslist)
{
	t_lst	*previous_last;
	t_lst	*current_first;
	t_lst	*current_last;

	if (pslist->len < 2)
		return;
	previous_last = pslist->last->previous;
	current_last = pslist->last;
	current_first = pslist->first;

	current_last->next = current_first;
	current_first->previous = current_last;
	pslist->first = current_last;
	pslist->last = previous_last;

	pslist->first->previous = 0;
	pslist->last->next = 0;
}


/**
 * @brief rotate a - shift up all elements of stack a by 1. The first element
 * becomes the last one.
 *
 * @param stack
 */
void	ps_rra(t_stack *stack)
{
	ps_r_rotate_list(&(stack->a));
}

/**
 * @brief rotate b - shift up all elements of stack b by 1. The first element
 * becomes the last one.
 *
 * @param stack
 */
void	ps_rrb(t_stack *stack)
{
	ps_r_rotate_list(&(stack->b));
}

/**
 * @brief ra and rb at the same time.
 *
 * @param stack
 */
void	ps_rrr(t_stack *stack)
{
	ps_rra(stack);
	ps_rrb(stack);
}
