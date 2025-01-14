NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror
# -fsanitize=address -g3

SRCS = algo.c error_handling.c instructions.c instructions2.c \
       stack_utils.c stack_utils2.c main.c split.c utils.c \
	   test_instructions.c instructions3.c check_if_sort.c\

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