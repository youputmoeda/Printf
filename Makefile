NAME = libftprintf.a
INCLUDE = ft_printf.h
SRC= ft_printf transformers1 transformers2
CC =gcc
RM =rm -f
CFLAGS = -Wall -Wextra -Werror -I.

all:	$(NAME)

$(NAME): 	$(SRC:=.o) $(INCLUDE)
				ar -rcs $(NAME) $(SRC:=.o)
				ranlib $(NAME)
clean:
	$(RM)	$(SRC:=.o)
fclean: clean
		$(RM)	$(NAME)
re: fclean all

