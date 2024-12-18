#ifndef STRING_H
# define STRING_H
# include <stdio.h>

char	*int_to_ascii(int nb);
size_t	str_len(const char *string);
int ascii_to_int(const char *string);
int is_ascii_num(const char *string);
char **split(char const *string, char c);

#endif
