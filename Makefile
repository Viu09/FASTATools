##
## EPITECH PROJECT, 2021
## FASTATools
## File description:
## Makefile
##

NAME	= FASTAtools

CC		= 	gcc

RM	= rm -f

SRCS	= 	main.c									\
			src/display/display_usage.c

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