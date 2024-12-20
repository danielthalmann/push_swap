NAME=ps
CC=gcc
BUILD_FOLDER=build

ASRC=src/main.c \
	src/loader.c \
	src/list/list.c \
	src/io/print.c \
	src/io/print_int.c \
	src/exceptions/exceptions.c \
	src/ps/add_value.c \
	src/ps/create_stack.c \
	src/ps/execute.c \
	src/ps/del_value.c \
	src/ps/destroy_stack.c \
	src/ps/is_ordered.c \
	src/ps/print_stack.c \
	src/ps/rotate.c \
	src/ps/r_rotate.c \
	src/ps/swap.c \
	src/ps/push.c \
	src/string/str_len.c \
	src/string/split.c \
	src/string/int_to_ascii.c \
	src/string/is_ascii_num.c \
	src/string/ascii_to_int.c \


AOBJ=$(ASRC:.c=.o)

CFLAGS =

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

all: $(AOBJ)
	mkdir -p $(BUILD_FOLDER)
	$(CC) -o $(BUILD_FOLDER)/$(NAME) $(AOBJ)

debug: CFLAGS = -g
debug: clean all
	rm -f $(AOBJ)
	./$(BUILD_FOLDER)/$(NAME) 1 6 5 8 9

clean:
	rm -f $(AOBJ)
