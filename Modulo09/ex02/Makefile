NAME		=	PmergeMe

CXX			=	clang++
RM			=	rm -rf

SRCS		=	main.cpp PmergeMe.cpp

OBJS		=	${SRCS:.cpp=.o}

CXXFLAGS	=	-std=c++98 -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all