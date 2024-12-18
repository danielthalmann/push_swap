#include "push_swap.h"
#include "../io/print.h"

void ps_print_list(t_lst *lst)
{
	t_lst *clst;

	clst = lst;
	while (clst)
	{
		print("- ");
		print_int(clst->c_int);
		printlf();
		clst = clst->next;
	}
}

void ps_print_stack(t_stack *stack)
{
	print("[Stack A (");
	print_int(stack->a.len);
	print(")]\n");
	ps_print_list(stack->a.first);
	print("[Stack B (");
	print_int(stack->b.len);
	print(")]\n");
	ps_print_list(stack->b.first);
}
