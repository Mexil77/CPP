# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 16:02:14 by emgarcia          #+#    #+#              #
#    Updated: 2022/03/08 16:30:53 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	frag

CPP			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
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