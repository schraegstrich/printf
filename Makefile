NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printchar.c ft_printstr.c ft_fake_itoa.c ft_hex_itoa.c ft_str_tolower.c ft_print_ptr.c

OBJ = $(SRC:.c=.o)

AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJ)
	MAKE -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

#bonus: $(OBJ) $(BOBJ)
#		$(AR) $(NAME) $(BOBJ)

clean:
	MAKE clean -C ./libft
	rm -rf $(OBJ) 

fclean: clean
	MAKE fclean -C ./libft
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
