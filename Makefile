# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 11:46:37 by jkovacev          #+#    #+#              #
#    Updated: 2024/12/11 11:52:31 by jkovacev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

DEPS = libftprintf.h

SRCS = ft_printf.c \
	 arg_conversions/char_argument.c \
	 arg_conversions/string_argument.c \
	 arg_conversions/pointer_argument.c \
	 arg_conversions/int_argument.c \
	 arg_conversions/unsigned_d_argument.c \
	 helpers/ft_itoa.c
	 helpers/write_str.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

