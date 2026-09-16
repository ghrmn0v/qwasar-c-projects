CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
NAME = libmy_printf.a

SRC = my_printf.c put_char.c put_str.c put_int.c put_hex.c put_unsigned.c put_pointer.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) rcs $(NAME) $(OBJ)

%.o: %.c my_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
