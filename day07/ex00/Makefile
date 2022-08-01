
# Name of the final executable files
NAME = ./SomeFunctions

# Project's directories
OBJECTSDIR = objects
HEADERFILE = whatever.hpp

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
MKDIR = mkdir -p
MAKE = make -C


all:  $(NAME)
	
# making rules
$(NAME):$(HEADERFILE) $(OBJS)
	$(CC) -I $(HEADERFILE) $(OBJS) -o $@

main.o: main.cpp $(HEADERFILE)
	@$(MKDIR) $(dir $@)
	$(CC) $(FLAGS) -I $(HEADERFILE) -o $@ -c $<

# Remove all objects, dependencies and executable files generated during the build
clean:
	$(RMDIR) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

