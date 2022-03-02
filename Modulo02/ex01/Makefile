# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 12:47:21 by emgarcia          #+#    #+#              #
#    Updated: 2022/03/02 12:47:32 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fixed

CPP			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp Fixed.cpp
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