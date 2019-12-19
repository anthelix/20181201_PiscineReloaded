#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schatagn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/14 15:47:00 by schatagn          #+#    #+#              #
#    Updated: 2018/11/19 19:11:23 by schatagn         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRCPATH =./srcs/
INCAPATH = ./includes/
HEADER = $(INCAPATH)libft.h
OBJS = ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: $(SRCPATH)%.c
	gcc $(CFLAGS) -o $@ -c $< -I $(HEADER)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
