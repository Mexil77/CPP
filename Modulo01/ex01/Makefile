# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mexil <mexil@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 16:34:01 by emgarcia          #+#    #+#              #
#    Updated: 2022/02/24 13:03:10 by mexil            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	test

CPP			=	clang++
RM			=	rm -rf

SRCS		=	Zombie.cpp ZombieHorde.cpp main.cpp
OBJS		=	${SRCS:.cpp=.o}

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	${CPP} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all