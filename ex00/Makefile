SRCS	= megaphone.cpp
FLGS	= -Wall -Werror -Wextra
CC		= g++
RM		= rm -f
NAME	= megaphone

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean fclean re all
