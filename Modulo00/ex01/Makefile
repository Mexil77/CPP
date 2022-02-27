# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 16:02:40 by emgarcia          #+#    #+#              #
#    Updated: 2022/02/27 17:57:55 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	uslesscontactbook

CPP			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp UslessBook.cpp Contact.cpp
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