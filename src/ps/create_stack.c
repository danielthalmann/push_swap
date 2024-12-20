/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthalman <daniel@thalmann.li>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 00:00:00 by dthalman          #+#    #+#             */
/*   Updated: 2024/12/20 00:00:00 by dthalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_stack	*ps_create_stack(void)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	if (stack)
	{
		stack->a.first = 0;
		stack->a.last = 0;
		stack->a.len = 0;
		stack->b.first = 0;
		stack->b.last = 0;
		stack->b.len = 0;
	}
	return (stack);
}
