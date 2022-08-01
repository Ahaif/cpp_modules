NAME  = hord_zombie

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp zombieHorde.cpp Class_Zombie.cpp

OBJ :=$(SRC:.cpp=.o)

CC = clang++

INCLUDE = Class_Zombie.hpp



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