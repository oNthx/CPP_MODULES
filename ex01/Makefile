# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bozgur <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 21:38:13 by bozgur            #+#    #+#              #
#    Updated: 2022/09/25 22:02:35 by bozgur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= $(wildcard *.cpp)
OBJS	= $(SRCS:.cpp=.o)

NAME	= PhoneBook
CC		= g++
RM		= rm -f
FLS		= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean fclean all re
