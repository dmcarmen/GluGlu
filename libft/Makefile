NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -I. -c -fPIC
SRC = ft_split.c ft_calloc.c ft_strdup.c ft_strnstr.c ft_strncpy.c ft_strncmp.c ft_strtrim.c ft_isblank.c ft_isspace.c ft_strlcat.c ft_isprint.c ft_strcmp.c ft_isalnum.c ft_memchr.c ft_isupper.c ft_putnbr_fd.c ft_putchar_fd.c ft_isalpha.c ft_atoi.c ft_putstr_fd.c ft_strlcpy.c ft_putendl_fd.c ft_memccpy.c ft_memcmp.c ft_isascii.c ft_itoa.c ft_strrchr.c ft_strjoin.c ft_memmove.c ft_strcpy.c ft_toupper.c ft_memcpy.c ft_substr.c ft_strmapi.c ft_isdigit.c ft_strtrim.c ft_strlen.c ft_bzero.c ft_strchr.c ft_islower.c ft_tolower.c ft_memset.c
SRCBONUS = ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:%.c=%.o)
OBJBONUS = $(SRCBONUS:%.c=%.o)

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus:
	$(CC) $(CFLAGS) $(SRCBONUS)
	ar rc $(NAME) $(OBJBONUS)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(OBJ) $(OBJBONUS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

rebonus: fclean bonus

so: $(OBJ) $(OBJBONUS) libft.h
	$(CC) -shared -Wl,-soname,libft.so -o libft.so $(OBJ) $(OBJBONUS)

.PHONY: bonus clean fclean all re rebonus
