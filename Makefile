# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 18:26:38 by tnamir            #+#    #+#              #
#    Updated: 2021/12/13 15:47:10 by tnamir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-

NAME = libftprintf.a

FCTS 	=	ft_putstr.c ft_puthex.c ft_putsigned.c ft_putunsigned.c ft_putchar.c ft_putadd.c ft_printf.c

OBJ		=	ft_putstr.o ft_puthex.o ft_putsigned.o ft_putunsigned.o ft_putchar.o ft_putadd.o ft_printf.o

BONUSFCTS =	ft_printf_bonus.c sharp.c plus.c space.c formatspec.c

OBJBONUS =	ft_printf_bonus.o sharp.o plus.o space.o formatspec.o

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	@ar cr $@ $(OBJ)

$(OBJ): $(FCTS)
	@cc -Wall -Werror -Wextra -c $(FCTS)

$(OBJBONUS): $(BONUSFCTS)
	@cc -Wall -Werror -Wextra -c $(BONUSFCTS)

clean:
	@rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	@rm -f $(NAME)

bonus: $(NAME) $(OBJBONUS) ft_printf_bonus.h
	@ar crb ft_printf.o $(NAME) $(OBJBONUS)

re: fclean all

.PHONY: clean fclean bonus re