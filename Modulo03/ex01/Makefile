# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 12:59:11 by emgarcia          #+#    #+#              #
#    Updated: 2022/03/08 13:20:15 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	scav

CPP			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp
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
