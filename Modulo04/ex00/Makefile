# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/13 18:02:15 by emgarcia          #+#    #+#              #
#    Updated: 2022/03/14 22:55:00 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	animal

CPP			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJS		=	${SRCS:.cpp=.o}

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

all: ${NAME}

${NAME}: ${OBJS}
	${CPP} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all