NAME = ./Serialization

# Project's directories
OBJECTSDIR = objects
HEADERS_FOLDER = headers

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
$(NAME):  $(OBJS)
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

