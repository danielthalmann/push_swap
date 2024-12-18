#include "string.h"

size_t	str_len(const char *string)
{
	int	count;

	count = 0;
	while (string[count])
		count++;
	return (count);
}
