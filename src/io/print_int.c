
# include <stdlib.h>
# include "print.h"
# include "../string/string.h"

void print_int(int val)
{
	char *string;

	string = int_to_ascii(val);
	print(string);
	free(string);
}
