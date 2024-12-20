#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../list/list.h"

typedef struct s_ps_list
{
	t_lst	*first;
	t_lst	*last;
	int		len;
}	t_ps_list;

typedef struct s_stack
{
	t_ps_list	a;
	t_ps_list	b;
	/* data */
}	t_stack;

t_stack	*ps_create_stack(void);
void	ps_destroy_stack(t_stack *stack);
void	ps_add_value(t_stack *stack, int val);
void	ps_add_front(t_ps_list *list, int val);
void	ps_add_back(t_ps_list *list, int val);
void	ps_del_front(t_ps_list *list);
void	ps_del_back(t_ps_list *list);
void	ps_print_stack(t_stack *stack);
void	ps_ra(t_stack *stack);
void	ps_rb(t_stack *stack);
void	ps_rr(t_stack *stack);
void	ps_rra(t_stack *stack);
void	ps_rrb(t_stack *stack);
void	ps_rrr(t_stack *stack);
void	ps_sa(t_stack *stack);
void	ps_sb(t_stack *stack);
void	ps_pa(t_stack *stack);
void	ps_pb(t_stack *stack);

#endif
