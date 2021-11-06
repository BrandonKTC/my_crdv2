CC    =    GCC

SRC    =    my_putchar.c    \
			my_putstr.c    \
			my_getnbr.c    \
			my_putnbr.c    \
			my_strcmp.c	\
			is_num.c    \
			word_count.c    \
			my_str_to_word_array.c    \

NAME    =    ./libmy.a

OBJ    =    $(SRC:%.c=%.o)


RM    =    rm -f

$(NAME):    $(OBJ)
				ar rc $(NAME) $(OBJ)

all:    $(NAME)

clean: 
		$(RM) $(OBJ)

fclean:        clean
		$(RM) $(NAME)

re:    fclean all
