SRCS			= main.cpp \
Bureaucrat.cpp \
Form.cpp \

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= Form

all:			$(NAME)

$(NAME):		$(OBJS) Bureaucrat.hpp Form.hpp
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -I Form.hpp -I Bureaucrat.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
