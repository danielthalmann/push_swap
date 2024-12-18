#include "string.h"
#include <stdlib.h>

int	len_int_to_ascii(long nb)
{
	int	length;

	length = 0;
	if (nb <= 0)
		length++;
	while (nb)
	{
		nb /= 10;
		length++;
	}
	return (length);
}

char	*int_to_ascii(int nb)
{
	char	*s;
	int	length;
	int		v;

	length = len_int_to_ascii(nb);

	s = malloc((length + 1) * sizeof(char));
	if (!s)
		return (0);
	s[length] = 0;
	length--;
	if (nb == 0)
		s[length] = '0';
	if (nb < 0)
		s[0] = '-';
	while (nb && length > -1)
	{
		v = (nb % 10);
		if (v < 0)
			v = -v;
		s[length] = '0' + v;
		nb = nb / 10;
		length--;
	}
	return (s);
}
