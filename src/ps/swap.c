/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthalman <daniel@thalmann.li>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 00:00:00 by dthalman          #+#    #+#             */
/*   Updated: 2024/12/20 00:00:00 by dthalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief swap the first 2 elements at the top of stacka. Do nothing if thereis
 * only one or no elements
 *
 * @param stack
 */
void	ps_swap_list(t_ps_list *pslist)
{
	t_lst	*new_first;
	t_lst	*current_first;

	if (2 > pslist->len)
		return;
	if (2 == pslist->len)
	{
		current_first = pslist->first;
		pslist->first = pslist->last;
		pslist->last = current_first;
		pslist->first->previous = 0;
		pslist->first->next = pslist->last;
		pslist->last->previous = pslist->first;
		pslist->last->next = 0;
	} 
	else
	{
		current_first = pslist->first;
		new_first = pslist->first->next;
		current_first->previous = new_first;
		current_first->next = new_first->next;
		new_first->next = current_first;
		pslist->first = new_first;
		pslist->first->previous = 0;
		pslist->last->next = 0;
	}
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
void	ps_ss(t_stack *stack)
{
	ps_sa(stack);
	ps_sb(stack);
}
