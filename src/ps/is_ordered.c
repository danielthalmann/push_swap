/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ordered.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthalman <daniel@thalmann.li>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 00:00:00 by dthalman          #+#    #+#             */
/*   Updated: 2024/12/20 00:00:00 by dthalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_is_ordered(t_stack *stack)
{
	int		val;
	t_lst	*lst;

	if (0 < stack->b.len)
		return (0);
	if (2 > stack->a.len)
		return (1);
	val = stack->a.first->c_int;
	lst = stack->a.first->next;
	while (lst)
	{
		if (lst->c_int < val)
			return (0);
		val = lst->c_int;
		lst = lst->next;
	}
	return (1);
}