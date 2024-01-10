# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 23:44:44 by lzaengel          #+#    #+#              #
#    Updated: 2024/01/11 00:40:05 by lzaengel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

SRC = main.c ft_printf_hexa.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c init.c radix.c sort.c

OBJ = $(SRC:%.c=%.o)

LIBFT = libft/libft.a
LIBFTDIR = libft

FLAGS = -Wall -Wextra -Werror
INC = -I. -I$(LIBFTDIR)

all: $(NAME)
	
$(NAME): $(OBJ)
	cc $(OBJ) -o $(NAME)

%.o: %.c
	cc -c $(FLAGS) $^

clean:
	make clean -C
	rm -f $(OBJ)

fclean: clean
	make fclean -C 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re