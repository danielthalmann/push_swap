
#include "string.h"

/**
 * @brief check if the value is one of space character '\t', '\n', '\v',
 * 													   '\f', '\r', ' '
 *
 * @param c char value
 * @return int This function returns non-zero value if c is a space,
 * 		   else it returns 0.
 */
int	_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

/**
 * @brief check if the value is a character sign '+' or '-'
 *
 * @param c char value
 * @return int This function returns non-zero value if c is a sign, else
 *         it returns 0.
 */
int	_issign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * @brief Converts the string pointed to, by the argument str to an
 *        integer (type int).
 *
 * @param str
 * @return unsigned int
 */
unsigned int	_convnum(const char *str)
{
	unsigned int	value;
	int				first;

	first = 1;
	value = 0;
	while (*str && _isdigit(*str))
	{
		if (first)
		{
			value = *str - '0';
			first = 0;
		}
		else
		{
			value = value * 10;
			value = value + (*str - '0');
		}
		str++;
	}
	return (value);
}

/**
 * @brief Converts the string pointed to, by the argument str to
 *        an integer (type int).
 *
 * @param string string pointer
 * @return int the value converted of the the string
 */
int	ascii_to_int(const char *string)
{
	unsigned int	value;
	int				sign;

	if (*string == 0)
		return (0);
	value = 0;
	sign = 1;
	while (*string && _isspace(*string))
		string++;
	if (*string && _issign(*string))
	{
		if (*string == '-')
			sign = -sign;
		string++;
	}
	value = _convnum(string);
	return (sign * value);
}
