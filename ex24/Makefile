NAME = libft.a
SRC_DIR = srcs
INCLUDE_DIR = includes
SRCS = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strcmp.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_swap.c
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDE_DIR)
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
