# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 15:22:10 by emgarcia          #+#    #+#              #
#    Updated: 2022/01/11 15:24:52 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	test

CC		=	clang++
RM		=	rm -rf

SRCS	=	Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
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