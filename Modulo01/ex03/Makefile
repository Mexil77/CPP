# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mexil <mexil@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 20:26:16 by mexil             #+#    #+#              #
#    Updated: 2022/02/24 22:12:44 by mexil            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	test

CPP			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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