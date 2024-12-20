
#include "list/list.h"
#include "io/print.h"
#include "exceptions/exceptions.h"
#include "ps/push_swap.h"
#include "string/string.h"
#include <stdlib.h>

int fill_stack(int argc, char** argv, t_stack **stack)
{
	unsigned int i;

	for (i = 0; i < argc; ++i)
	{
		if (!is_ascii_num(argv[i]))
			return (no_ascii_number());
		ps_add_value(*stack, ascii_to_int(argv[i]));
	}
	return (0);
}

int load_2arg(char *argv, t_stack **stack)
{
	char		 **values;
	unsigned int len;
	int			 ret;

	values = split(argv, ' ');
	if (!values)
		return (no_enought_memory());
	len = 0;
	while (values[len])
		len++;
	ret = fill_stack(len, values, stack);
	while (--len > -1)
		free(values[len]);
	free(values);
	return (ret);
}

int load(int argc, char** argv, t_stack **stack)
{
	int ret;

	if (2 > argc)
		return (no_enought_parameter());
	*stack = ps_create_stack();
	if (!*stack)
		return (no_enought_memory());
	if (2 == argc)
		return (load_2arg(argv[1], stack));
	else
		return (fill_stack(argc - 1, &(argv[1]), stack));
}
