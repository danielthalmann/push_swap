#include "../io/print.h"
#include "exceptions.h"
#include <errno.h>

int no_enought_parameter()
{
	print_error("no enought parameter\n");
	return (EINVAL);
}

int no_enought_memory()
{
	print_error("no enought memory\n");
	return (ENOMEM);
}

int no_ascii_number()
{
	print_error("no ascii number\n");
	return (EINVAL);
}
