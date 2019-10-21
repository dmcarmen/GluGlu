# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edramire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/19 14:25:16 by edramire          #+#    #+#              #
#    Updated: 2019/10/20 21:51:49 by edramire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

all: $(NAME)

$(NAME):
	cc -Wall -Werror -Wextra -c ft_add_cardinal_node.c 
	cc -Wall -Werror -Wextra -c ft_atoi.c 
	cc -Wall -Werror -Wextra -c ft_cardinal_numbers.c 
	cc -Wall -Werror -Wextra -c ft_create_cardinal_node.c 
	cc -Wall -Werror -Wextra -c ft_create_key_value.c 
	cc -Wall -Werror -Wextra -c ft_free_cardinal_list.c 
	cc -Wall -Werror -Wextra -c ft_get_buffer.c 
	cc -Wall -Werror -Wextra -c ft_is_numeric.c 
	cc -Wall -Werror -Wextra -c ft_is_printable.c 
	cc -Wall -Werror -Wextra -c ft_itoa.c 
	cc -Wall -Werror -Wextra -c ft_list_getters.c 
	cc -Wall -Werror -Wextra -c ft_load_dictionary.c 
	cc -Wall -Werror -Wextra -c ft_print_cardinal_list.c 
	cc -Wall -Werror -Wextra -c ft_putchar.c 
	cc -Wall -Werror -Wextra -c ft_putstr.c 
	cc -Wall -Werror -Wextra -c ft_str_one_with_n_zeros.c 
	cc -Wall -Werror -Wextra -c ft_strcmp.c 
	cc -Wall -Werror -Wextra -c ft_strcpy.c 
	cc -Wall -Werror -Wextra -c ft_strlcpy.c 
	cc -Wall -Werror -Wextra -c ft_strlen.c 
	cc -Wall -Werror -Wextra -c ft_trim_spaces.c 
	cc -Wall -Werror -Wextra -c ft_validate_line.c 
	cc -Wall -Werror -Wextra -c ft_validate_number.c 
	cc -Wall -Werror -Wextra -c list.c 
	cc -Wall -Werror -Wextra main.c ft*.o list.o -o $(NAME)
clean:
	/bin/rm -rf *.o
fclean: clean
	/bin/rm -rf $(NAME)
re: fclean $(NAME)
