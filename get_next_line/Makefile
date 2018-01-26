NAME = a.out
LIB = libft.a
CFLAGS = -Wall -Wextra -Werror -c
SRC = *.c
LIB_OBJ = *.o
LIB_SRC = libft/*.c


all: $(LIB) $(NAME) clean

$(NAME):
	@gcc *.c -L. -lft -o $(NAME)

$(LIB):
	@gcc -c $(LIB_SRC)
	@ar rc $(LIB) $(LIB_OBJ)
clean:
	@/bin/rm -f $(LIB_OBJ) $(LIB)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all