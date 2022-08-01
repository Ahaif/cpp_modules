NAME  = Phone.Book

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Class_Contact.cpp Class_PhoneBook.cpp

OBJ :=$(SRC:.cpp=.o)

CC = clang++

INCLUDE = Class_Contact.hpp Class_PhoneBook.hpp



$(NAME)	: $(OBJ) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
all	: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@


clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re		: fclean all