# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 12:02:03 by abkasmi           #+#    #+#              #
#    Updated: 2022/03/14 19:01:08 by abkasmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  push_swap.c \
		sort_small.c \
		utils.c \
		check.c \
		push.c \
		reverse_rotate.c \
		rotate.c \
		swap.c \
		radix.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all : $(NAME)

$(NAME) : $(OBJS)
			gcc -Wall -Werror -Wextra $(SRCS) -o $(NAME) 
#-fsanitize=address

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re