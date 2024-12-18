#include "string.h"

int	is_ascii_num(const char *string)
{
	while (*string)
	{
		if ((*string < '0' || *string > '9') && *string != '-' && *string != '+')
			return (0);
		string++;
	}
	return (1);
}
