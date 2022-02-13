LIB = libft.a

CC = gcc

CFLAG = -Wall -Werror -Wextra

INCLUDE = includes

SRC = ft_isdigit.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_strchr.c

OBJ = $(SRC:.c=.o)

PATH_SRC = $(addprefix scrcs/, $(SRC))
PATH_OBJ = $(addprefix obj/, $(OBJ))


all: directory_obj_creation $(LIB)

directory_obj_creation:
	if ! [ -d "obj/" ]; then mkdir obj ; fi

$(LIB): $(PATH_OBJ)
	ar rc $@ $(PATH_OBJ)
	ranlib $@

$(addprefix obj/, %.o): $(addprefix scrcs/, %.c)
	$(CC) $(CFLAG) -c $< -o $@ -I$(INCLUDE)

clean:
	rm -rf obj

fclean: clean
	rm -f $(LIB)

re: fclean all