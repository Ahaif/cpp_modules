
SRCS			= main.cpp \
Bureaucrat.cpp \

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= Bureaucrat

all:			$(NAME)

$(NAME):		$(OBJS) Bureaucrat.hpp
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -I Bureaucrat.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
