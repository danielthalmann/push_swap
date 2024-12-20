/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthalman <daniel@thalmann.li>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 00:00:00 by dthalman          #+#    #+#             */
/*   Updated: 2024/12/20 00:00:00 by dthalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list/list.h"
#include "io/print.h"
#include "exceptions/exceptions.h"
#include "ps/push_swap.h"
#include "string/string.h"
#include "loader.h"
#include<unistd.h>


void slp(void)
{
	usleep(300000);
}

int finish(void)
{
	print("ok\n");
	return 0;
}

int	main(int argc, char **argv)
{
	int		ret;
	t_stack	*stack;

	ret = load(argc, argv, &stack);
	if (ret)
		return (ret);

	print("is ordered : ");
	print_int(ps_is_ordered(stack));
	printlf();
/*
	ps_print_stack(stack);
	ps_execute(stack, ra);
	ps_print_stack(stack);
	ps_execute(stack, ra);
	ps_print_stack(stack);
	ps_execute(stack, sa);
	ps_print_stack(stack);
	ps_execute(stack, rra);
	ps_print_stack(stack);
	ps_execute(stack, sa);
	ps_print_stack(stack);
	ps_execute(stack, pa);
	ps_print_stack(stack);
	ps_execute(stack, pa);
	ps_print_stack(stack);
	ps_execute(stack, pa);
	ps_print_stack(stack);
	ps_execute(stack, pa);
	ps_print_stack(stack);
	ps_execute(stack, pa);
	ps_print_stack(stack);
	ps_execute(stack, pa);
	ps_print_stack(stack);
	ps_execute(stack, pb);

*/	
	ps_print_stack(stack);
	int rotate;

	int is_not_ordered;
	is_not_ordered = !ps_is_ordered(stack);

	while (!ps_is_ordered(stack)) {
		rotate = 0;
		while (is_not_ordered && stack->a.first->c_int < stack->a.first->next->c_int && ++rotate < stack->a.len)
		{
			ps_execute(stack, ra);
			ps_print_stack(stack);
			slp();
			is_not_ordered = !ps_is_ordered(stack);
		}
		if (is_not_ordered)
			ps_execute(stack, pa);

		ps_print_stack(stack);
		slp();

		while (is_not_ordered && stack->a.first->c_int < stack->b.first->c_int && ++rotate < stack->a.len)
		{
			ps_execute(stack, ra);
			ps_print_stack(stack);
			slp();
			is_not_ordered = !ps_is_ordered(stack);
		}

		if (is_not_ordered)
			ps_execute(stack, pb);

		ps_print_stack(stack);
		slp();

		rotate = 0;
		while (is_not_ordered && stack->a.first->c_int > stack->a.last->c_int && ++rotate < stack->a.len)
		{
			ps_execute(stack, rra);
			ps_print_stack(stack);
			slp();
			is_not_ordered = !ps_is_ordered(stack);
		}
		if (is_not_ordered)
			ps_execute(stack, pa);
		
		ps_print_stack(stack);
		slp();


		while (is_not_ordered && stack->a.last->c_int < stack->b.first->c_int && ++rotate < stack->a.len)
		{
			ps_execute(stack, ra);
			ps_print_stack(stack);
			slp();
			is_not_ordered = !ps_is_ordered(stack);
		}

		if (is_not_ordered)
			ps_execute(stack, pb);

		ps_print_stack(stack);
		slp();		
	}

	ps_print_stack(stack);
	ps_destroy_stack(stack);
	
	return (finish());
}
