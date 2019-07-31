NAME = ft_printf.a
CFLAGS	= -Wall -Werror -Wextra -I. -c
SRC = ft_utoa.c \
	  ft_itoa.c \
	  ft_htoa.c \
	  ft_otoa.c \
	  ft_printf.c \
	  ft_printstr.c \
	  ft_printunsigned.c \
	  ft_printvoid.c \
	  ft_printoctal.c \
	  ft_printhexa.c \
	  ft_printnbr.c \
	  ft_printchar.c \
	  ft_strlen.c \
	  ft_putstr.c \
	  ft_putchar.c \
	  ft_putnbr.c \

OBJ	= $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc $(CFLAGS) $(SRC)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

