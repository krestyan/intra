NAME = "main.c"
LIBNAME = libft.a
CFLAGS = -Wall -Wextra -Werror -c
SRC = *.c
OBJ = *.o

all: $(NAME)

$(NAME):
	    gcc $(CFLAGS) $(SRC) basic/$(SRC) sup/$(SRC)
		    ar rc $(LIBNAME) $(OBJ)
			    ranlib libft.a

clean:
	    /bin/rm -f $(OBJ)

fclean: clean
	    /bin/rm -f $(LIBNAME)

re: fclean all
