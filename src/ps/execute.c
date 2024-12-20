/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthalman <daniel@thalmann.li>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 00:00:00 by dthalman          #+#    #+#             */
/*   Updated: 2024/12/20 00:00:00 by dthalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../io/print.h"

void	execute_s(t_stack *stack, t_ps ps)
{
	switch (ps)
	{
	case sa:
		ps_sa(stack);
		print("sa\n");
		break;
	case sb:
		ps_sb(stack);
		print("sb\n");
		break;	
	case ss:
		ps_ss(stack);
		print("ss\n");
		break;
	}
}

void	execute_p(t_stack *stack, t_ps ps)
{
	switch (ps)
	{
	case pa:
		ps_pa(stack);
		print("pa\n");
		break;
	case pb:
		ps_pb(stack);
		print("pb\n");
		break;	
	}
}

void	execute_r(t_stack *stack, t_ps ps)
{
	switch (ps)
	{
	case ra:
		ps_ra(stack);
		print("ra\n");
		break;
	case rb:
		ps_rb(stack);
		print("rb\n");
		break;	
	case rr:
		ps_rr(stack);
		print("rr\n");
		break;
	}
}

void	execute_rr(t_stack *stack, t_ps ps)
{
	switch (ps)
	{
	case rra:
		ps_rra(stack);
		print("rra\n");
		break;
	case rrb:
		ps_rrb(stack);
		print("rrb\n");
		break;	
	case rrr:
		ps_rrr(stack);
		print("rrr\n");
		break;
	}
}

/**
 * @brief Execute a command on lists
 * 
 * @param stack 
 * @param ps 
 */
void	ps_execute(t_stack *stack, t_ps ps)
{

	if (ps >= sa && ps <= ss) 
	{
		execute_s(stack, ps);
	}
	else if (ps >= pa && ps <= pb) 
	{
		execute_p(stack, ps);
	}
	else if (ps >= ra && ps <= rr) 
	{
		execute_r(stack, ps);
	}
	else if (ps >= rra && ps <= rrr) 
	{
		execute_rr(stack, ps);
	}
}
