# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 15:22:10 by emgarcia          #+#    #+#              #
#    Updated: 2022/02/27 17:58:30 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	test

CPP			=	clang++
RM			=	rm -rf

SRCS		=	Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
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