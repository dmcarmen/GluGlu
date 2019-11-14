NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -I. -c
SRC = ft_split.c ft_calloc.c ft_strdup.c ft_strnstr.c ft_strncpy.c ft_strncmp.c ft_isblank.c ft_isspace.c ft_strlcat.c ft_isprint.c ft_strcmp.c ft_isalnum.c ft_memchr.c ft_isupper.c ft_putnbr_fd.c ft_putchar_fd.c ft_isalpha.c ft_atoi.c ft_putstr_fd.c ft_strlcpy.c ft_putendl_fd.c ft_memccpy.c ft_memcmp.c ft_isascii.c ft_itoa.c ft_strrchr.c ft_strjoin.c ft_memmove.c ft_strcpy.c ft_toupper.c ft_memcpy.c ft_substr.c ft_strmapi.c ft_strtrim.c ft_isdigit.c ft_strtrim.c ft_strlen.c ft_bzero.c ft_strchr.c ft_islower.c ft_tolower.c ft_memset.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): #$(SRC) libft.h
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
