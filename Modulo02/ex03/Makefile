# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 16:10:58 by emgarcia          #+#    #+#              #
#    Updated: 2022/03/06 17:05:17 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fixed

CPP			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp Fixed.cpp Point.cpp bsp.cpp
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
