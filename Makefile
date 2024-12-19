NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = error_handling.c create_list.c split.c utils.c main.c

OBJS = $(SRCS:.c=.o)

EXEC = push_swap

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re