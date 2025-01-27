name = push_swap

SRCS = src/push_swap.c \
		src/ft_strlen.c \
		src/ft_atoi.c \
		src/ft_split.c \
		src/ft_strdup.c \
		src/medianne.c \
		utils/get_instructions.c \
		utils/push_in.c \
		utils/rotate_in.c \
		utils/swap_in.c \
		utils/utils_in.c \
		utils/reverse_rotate.c \
		algo/algo_utils.c \
		algo/small_sort.c \
		algo/algo_large.c \

INCLUDES = includes/push_swap.h

OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3

all: $(NAME)

$(NAME): ${OBJS}
	${CC} ${CFLAGS} -I ${INCLUDES} ${OBJS} -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean:
		rm -rf $(NAME)
		rm -rf $(OBJS)

re:		fclean all

.PHONY: all clean fclean re