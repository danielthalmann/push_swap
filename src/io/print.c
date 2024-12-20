
# include "print.h"

void print_fd(int fd, char* string)
{
	int length;

	length = 0;
	while (string[length])
		length++;
	write(fd, string, length);
}

void printlf(void)
{
	print("\n");
}

void print_error(char* string)
{
	print_fd(STDERR_FILENO, string);
}

void print(char* string)
{
	print_fd(STDOUT_FILENO, string);
}
