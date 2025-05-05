CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_putnbr.c ft_putnbr_pos.c ft_puthexmaj.c ft_puthexmin.c ft_putadress.c
OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

HEADER = ft_printf.h


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus