NAME = libftprintf.a

FUNCTIONS = ft_printf.c	ft_format.c	ft_putchar.c ft_puthex.c ft_putnbr.c	\
			ft_putptr.c	ft_putstr.c	ft_putunsigned.c

OBJECTS = $(FUNCTIONS:.c=.o)

COMPILER = cc
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(COMPILER) $(FLAGS) -c $^ -o $@

clean:
	rm -rf *.o *.out

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re