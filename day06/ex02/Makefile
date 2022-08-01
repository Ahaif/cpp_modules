# Name of the final executable files
NAME = ./RealType

# Project's directories
OBJECTSDIR = objects
HEADERS_FOLDER = headers

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
# ECHO = /bin/echo
# ERRIGNORE = 2>/dev/null

all: $(NAME)


# making rules
$(NAME): $(OBJS)
	$(CC) -I $(HEADERS_FOLDER) $(OBJS) -o $@

main.o: main.cpp
	@$(MKDIR) $(dir $@)
	$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $@ -c $<

# Remove all objects, dependencies and executable files generated during the build
clean:
	@$(RMDIR) $(OBJS)


fclean: clean
	
	@$(RM) $(NAME) $(ERRIGNORE)

re: fclean all