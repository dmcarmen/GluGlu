# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edramire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/19 14:25:16 by edramire          #+#    #+#              #
#    Updated: 2019/10/19 22:08:54 by edramire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

$(NAME):
	gcc -Wall -Werror -Wextra -c ft*.c list.c
	gcc -Wall -Werror -Wextra main2.c ft*.o list.o -o $(NAME)
clean:
	/bin/rm -rf *.o
fclean: clean
	/bin/rm -rf $(NAME)
