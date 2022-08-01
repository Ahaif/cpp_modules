NAME  = ./fire

FLAGS = -Wall -Wextra -Werror -std=c++98

# Project's directories
SRCS_FOLDER = srcs
OBJECTSDIR = objects
HEADERS_FOLDER = headers

# Exercise files variable
SRC_FILES = CatClass.cpp \
DogClass.cpp \
Animal.cpp \
BrainClass.cpp

# Define objects for all sources
OBJ := $(addprefix $(OBJECTSDIR)/, $(SRC_FILES:.cpp=.o))

#variable names
CC = clang++
MKDIR = mkdir -p


	
all	: $(NAME)


$(OBJECTSDIR)/%.o: $(SRCS_FOLDER)/%.cpp $(HEADERS_FOLDER)
	@$(MKDIR) $(dir $@)
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $@ -c $<

main.o: main.cpp $(HEADERS_FOLDER)
	$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $(OBJECTSDIR)/$@ -c $<


$(NAME)	: $(OBJ) main.o
	$(CC) -I $(HEADERS_FOLDER) $(OBJ) $(OBJECTSDIR)/main.o -o $@

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re		: fclean all