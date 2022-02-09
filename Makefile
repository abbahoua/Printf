# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 21:58:36 by abbahoua          #+#    #+#              #
#    Updated: 2021/11/30 17:19:56 by abbahoua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC = ft_printf.c\
	  ft_putstr.c\
	  ft_putchar.c\
	  ft_putnbr.c\
	  ft_putnbr16.c\

OBJS = $(SRC:.c=.o)

GCC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	$(GCC) $(CFLAGS) -c $(SRC)
	ar -rc $(NAME) $(OBJS)
clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean	all

.PHONY:	all clean fclean re
