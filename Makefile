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

//OBJ is a list of the .c files but instead of .c it is now .o
OBJ	= $(SRC:%.c=%.o)

//all will automatically run if you type "$>make" in the command line since it is the first command in this file
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) //compiles all the .o files into the name.a library

$(OBJ): $(SRC)
	gcc $(CFLAGS) $(SRC) //compiles the program with all the .c files and the -Werror -Wextra -Wall flags

clean:
	rm -f $(OBJ) //removes all the .o files

fclean: clean //runs clean first then continues to run the following command
	rm -f $(NAME) //removes the name.a file in this case ft_printf.a

re: fclean all //runs fclean command which cleans all .o files and .a file then recompiles everything

