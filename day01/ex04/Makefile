NAME  = a.out

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 

OBJ :=$(SRC:.cpp=.o)

CC = clang++


$(NAME)	: $(OBJ) 
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	
all	: $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@


clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re		: fclean all