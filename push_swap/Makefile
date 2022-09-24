NAME = push_swap
NAME_B = checker
HEAD = push_swap.h
CC = clang 
CFLAGS = -Wall -Wextra -Werror
SRC = 	main.c push_swap.c sorting.c sorting2.c utilities.c utilities2.c check_errors.c \
		commands.c commands2.c ft_atoi_isdigit.c
SRC_B = checker.c checker2.c commands_bonus.c commands2_bonus.c commands3_bonus.c push_swap.c \
		sorting.c sorting2.c utilities.c utilities2.c check_errors.c commands.c commands2.c ft_atoi_isdigit.c

OBJ = ${SRC:.c=.o}
OBJ_B = ${SRC_B:.c=.o}

all: $(NAME)

bonus: $(NAME_B)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(NAME_B): $(OBJ_B)
	$(CC) $(OBJ_B) -o $(NAME_B)

%.o: %.c $(HEAD)
	$(CC) -c $(CFLAGS) $< -o $(<:.c=.o)

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: clean
	rm -f $(NAME) $(NAME_B)

re: fclean all

.PHONY: all clean fclean re