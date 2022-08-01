# Name of the final executable files
NAME = ./Casts

# Project's directories
SRCS_FOLDER = srcs
OBJECTSDIR = objects
HEADERS_FOLDER = headers

# Name of variables
FLAGS = -Wall -Wextra -Werror


# Exercise files variable
SRC_FILES = Casts.cpp

# Define objects for all sources
OBJS := $(addprefix $(OBJECTSDIR)/, $(SRC_FILES:.cpp=.o))

# Name the compiler
CC = clang++

# OS specific part
RM = rm -rf
RMDIR = rm -rf
MKDIR = mkdir -p
MAKE = make -C

all:  $(NAME)


# making rules
$(NAME):  $(OBJS) main.o
	$(CC) -I $(HEADERS_FOLDER) $(OBJS) $(OBJECTSDIR)/main.o -o $@

$(OBJECTSDIR)/%.o: $(SRCS_FOLDER)/%.cpp $(HEADERS_FOLDER)
	@$(MKDIR) $(dir $@)
	$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $@ -c $<

main.o: main.cpp $(HEADERS_FOLDER)
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $(OBJECTSDIR)/$@ -c $<

# Remove all objects, dependencies and executable files generated during the build
clean:
	@$(RMDIR) $(OBJECTSDIR)


fclean: clean
	$(RM) $(NAME) $(ERRIGNORE)

re: fclean all

# Print Credit
