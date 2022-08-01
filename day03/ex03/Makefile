NAME  = a.out

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ :=$(SRC:.cpp=.o)

CC = clang++

INCLUDE = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

$(NAME)	: $(OBJ) $(INCLUDE)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	
all	: $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@


clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re		: fclean all