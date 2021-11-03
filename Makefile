# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjokela <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 14:50:10 by mjokela           #+#    #+#              #
#    Updated: 2021/11/03 14:50:14 by mjokela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_putchar.c ft_putstr.c ft_strlen.c
HEADER = libft.h
O_FILES = ft_putchar.o ft_putstr.o ft_strlen.o


all:
	gcc -c -Wall -Werror -Wextra $(HEADER) $(SRCS);
	ar rc $(NAME) $(O_FILES);
	ranlib $(NAME);
	gcc main.c -L. -lft;

clean:
	rm -f $(O_FILES)  *.gch;

fclean:	
	rm -f $(O_FILES) $(NAME) *.gch a.out;

re: fclean all

.PHONY: all clean fclean re
