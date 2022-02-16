# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 15:02:54 by emgarcia          #+#    #+#              #
#    Updated: 2022/01/15 15:03:13 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	test

CC		=	clang++
RM		=	rm -rf

SRCS	=	main.cpp
OBJS	=	${SRCS:.cpp=.o}

CFLAGS	=	-Wall -Wextra -Werror

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all