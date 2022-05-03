# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 12:59:32 by emgarcia          #+#    #+#              #
#    Updated: 2022/05/03 15:02:18 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Bureaucrats

CPP			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp Bureaucrat.cpp
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