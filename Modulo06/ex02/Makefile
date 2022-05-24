# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 16:29:46 by emgarcia          #+#    #+#              #
#    Updated: 2022/05/24 13:48:41 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Generate

CXX			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp Base.cpp A.cpp B.cpp C.cpp
OBJS		=	${SRCS:.cpp=.o}

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all