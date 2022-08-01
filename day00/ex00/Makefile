NAME  = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ :=$(SRC:.cpp=.o)

CC = clang++



$(NAME)	: $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
all	: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@


clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re		: fclean all