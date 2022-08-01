SRCS			= main.cpp \
Bureaucrat.cpp \
Form.cpp \
ShrubberyCreationForm.cpp \
RobotomyRequestForm.cpp \
PresidentialPardonForm.cpp \

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= RealWorldForms

all:			$(NAME)

$(NAME):		$(OBJS) Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -I RobotomyRequestFor.hpp -I Form.hpp -I ShrubberyCreationForm.hpp -I Bureaucrat.hpp -I PresidentialPardonForm.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)
				$(RM) *_shrubbery

re:				fclean $(NAME)

.PHONY:			all clean fclean re
