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

int	main(int argc, char **argv)
{
	int		ret;
	t_stack	*stack;

	ret = load(argc, argv, &stack);
	if (ret)
		return (ret);
	ps_print_stack(stack);
	ps_ra(stack);
	ps_ra(stack);
	ps_sa(stack);
	ps_rra(stack);
	ps_sa(stack);
	ps_pa(stack);
	ps_print_stack(stack);
	ps_pb(stack);
	ps_print_stack(stack);
	ps_destroy_stack(stack);
	print("ok\n");
	return (0);
}
