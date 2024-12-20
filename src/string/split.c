
#include <stdlib.h>
#include "string.h"

void	split_move_forward(char const **s, char c, int not);
char	**split_allocate(char const *s, char c);
void	split_cpy(char const *start, char const *end, char *mem);

/**
 * @brief split string, with specified character as delimiter,
 * 		  into an array	of strings. The array is terminated by a NULL
 *
 * @param string
 * @param c
 * @return char**
 */
char	**split(char const *string, char c)
{
	char const	*start;
	char const	*end;
	char		**split;
	int			y;

	split = split_allocate(string, c);
	if (!split)
		return (0);
	start = string;
	end = string;
	y = 0;
	while (*end && split)
	{
		split_move_forward(&start, c, 0);
		end = start;
		split_move_forward(&end, c, 1);
		if (end - start)
		{
			split[y] = malloc((end - start) + 1);
			split_cpy(start, end, split[y++]);
		}
		start = end;
	}
	split[y] = 0;
	return (split);
}

void	split_move_forward(char const **s, char c, int not)
{
	if (not)
	{
		while (**s && **s != c)
			(*s)++;
	}
	else
	{
		while (**s && **s == c)
			(*s)++;
	}
}

char	**split_allocate(char const *s, char c)
{
	char const	*str;
	int			is_sep;
	int			count;

	count = 0;
	str = s;
	is_sep = 1;
	while (*str)
	{
		if (is_sep && *str != c)
		{
			is_sep = 0;
			count++;
		}
		else if (*str == c)
			is_sep = 1;
		str++;
	}
	return (malloc((count + 1) * sizeof(char *)));
}

void	split_cpy(char const *start, char const *end, char *mem)
{
	int	x;

	x = 0;
	while (start != end && mem)
	{
		mem[x++] = *start;
		start++;
	}
	mem[x] = 0;
}
