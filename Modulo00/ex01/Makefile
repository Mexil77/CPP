# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 16:02:40 by emgarcia          #+#    #+#              #
#    Updated: 2022/01/05 19:04:42 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	uslesscontactbook

CC		=	clang++
RM		=	rm -rf

SRCS	=	main.cpp UslessBook.cpp Contact.cpp
OBJS	=	${SRCS:.cpp=.o}

CFLAGS	=	-Wall -Wextra -Werror

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all