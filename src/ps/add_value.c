#include "push_swap.h"
#include "../io/print.h"

void ps_add_value(t_stack *stack, int val)
{
	ps_add_back(&(stack->a), val);
}

void ps_add_back(t_ps_list *list, int val)
{
	list->last = lst_create();
	list->last->c_int = val;
	++(list->len);
	lst_add_back(&(list->first), list->last);
}

void ps_add_front(t_ps_list *list, int val)
{
	t_lst *new;

	new = lst_create();
	new->c_int = val;
	++(list->len);
	lst_add_front(&(list->first), new);
	if (!list->last)
		list->last = list->first;
}
