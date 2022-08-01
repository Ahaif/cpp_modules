# Name of the final executable files
NAME = ./Array

# Project's directories
OBJECTSDIR = objects
HEADERFILE = Array.hpp

# Name of variables
FLAGS = -Wall -Wextra -Werror
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

# Exercise files variable
SRC_FILES = main.cpp

# Define objects for all sources
OBJS := $(SRC_FILES:.cpp=.o)

# Name the compiler
CC = clang++

# OS specific part
RM = rm -rf
RMDIR = rm -rf
MKDIR = mkdir -p
MAKE = make -C
ECHO = /bin/echo
ERRIGNORE = 2>/dev/null

all:  $(NAME)
	
# making rules
$(NAME): $(HEADERFILE) $(OBJS)
	@$(CC) -I $(HEADERFILE) $(OBJS) -o $@

main.o: main.cpp $(HEADERFILE)
	@$(MKDIR) $(dir $@)
	$(CC) $(FLAGS) -I $(HEADERFILE) -o $@ -c $<

# Remove all objects, dependencies and executable files generated during the build
clean:
	@$(RMDIR) $(OBJS)


fclean: clean
	$(RM) $(NAME) 

re: fclean all
# Print Credit
