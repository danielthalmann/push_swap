
#include "list/list.h"
#include "io/print.h"
#include "exceptions/exceptions.h"
#include "ps/push_swap.h"
#include "string/string.h"

int load(int argc, char **argv, t_stack **stack);

int main(int argc, char** argv)
{
	int ret;
	t_stack *stack;

	if(ret = load(argc, argv, &stack))
		return ret;
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
