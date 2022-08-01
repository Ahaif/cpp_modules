
# Name of the final executable files
NAME = ./easy_find

# Name of variables
FLAGS = -Wall -Wextra -Werror

# Exercise files variable
SRC_FILES = main.cpp

# Define objects for all sources
OBJS := $(SRC_FILES:.cpp=.o)

# Name the compiler
CC = clang++

# OS specific part
RM = rm -rf
RMDIR = rm -rf
MAKE = make -C


all:  $(NAME)
	
# making rules
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

main.o: main.cpp 
	$(CC) $(FLAGS) -o $@ -c $<

# Remove all objects, dependencies and executable files generated during the build
clean:
	$(RMDIR) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

