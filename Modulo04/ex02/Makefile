# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 13:56:03 by emgarcia          #+#    #+#              #
#    Updated: 2022/03/16 14:17:36 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	abstract

CPP			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
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