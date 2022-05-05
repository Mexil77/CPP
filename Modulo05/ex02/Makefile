# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 11:54:51 by emgarcia          #+#    #+#              #
#    Updated: 2022/05/05 16:10:44 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Forms

CPP			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
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
