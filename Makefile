#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laufuent <laufuent@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/02 19:53:53 by laufuent          #+#    #+#              #
#    Updated: 2024/09/09 21:00:06 by laufuent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

PREFIX = ft_

SRCS_FILES =	printf\ 
				putchar\
				puthex\
				putnbr\
		 		strlen\
				putptr\

SRCS = $(addprefix $(PREFIX), $(addsuffix .c, $(SRCS_FILES)))

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall - Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c %(DEPS???????????)
PENDIING
all:	${NAME}

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
