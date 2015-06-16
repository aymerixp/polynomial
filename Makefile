# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aratinau <aratinau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/09 17:54:36 by aratinau          #+#    #+#              #
#    Updated: 2015/06/16 14:24:34 by aratinau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = poly

SRC = poly.c

OBJ		= $(SRC:.c=.o)
	#CC		= gcc
	#CFLAGS	+= -Wall -Wextra -Werror
	#CFLAGS	+= -I./includes -L/usr/X11/lib -lmlx -lXext -lX11

$(NAME):
	gcc -Wall -Werror -Wextra $(SRC) \
	../libraire/libft.a

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) a.out

re: fclean $(NAME)
