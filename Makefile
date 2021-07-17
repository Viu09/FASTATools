##
## EPITECH PROJECT, 2021
## FASTATools
## File description:
## Makefile
##

NAME	= FASTAtools

CC		= 	gcc

RM	= rm -f

SRCS	= 	main.c												\
			src/display/display_usage.c							\
			src/error/check_error.c								\
			src/error/check_option_four.c						\
			src/error/verif_if_there_is_only_number.c			\
			src/error/check_almost_every_option.c				\
			src/run/init_struct.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I 
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re