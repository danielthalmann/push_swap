#include "push_swap.h"
#include "../io/print.h"

void ps_del_back(t_ps_list *list)
{
	t_lst *to_del;

	if(1 > list->len)
		return;
	to_del = list->last;
	if (1 == list->len) {
		list->first = 0;
		list->last = 0;
	} else {
		list->last = list->last->previous;
		list->last->next = 0;
	}
	lst_delone(to_del, 0);
	--(list->len);
}

void ps_del_front(t_ps_list *list)
{
	t_lst *to_del;

	if(1 > list->len)
		return;
	to_del = list->first;
	if (1 == list->len) {
		list->first = 0;
		list->last = 0;
	} else {
		list->first = list->first->next;
		list->first->previous = 0;
	}
	lst_delone(to_del, 0);
	--(list->len);
}
