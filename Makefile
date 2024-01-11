# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 23:44:44 by lzaengel          #+#    #+#              #
#    Updated: 2024/01/11 23:23:10 by lzaengel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

SRC = ./include/main.c\
./printf/ft_printf_hexa.c \
./printf/ft_printf.c \
./printf/ft_putchar.c \
./printf/ft_putnbr.c \
./printf/ft_putstr.c \
./include/init.c \
./include/radix.c \
./include/simple.c \
./include/radix_utils.c \
./instructions/push.c \
./instructions/rotate.c \
./instructions/reverse_rotate.c \
./instructions/swap.c


OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
			clang -o $(NAME) $(OBJ) $(CFLAGS)

clean :
			rm -rf $(OBJ)

fclean : clean
			rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re