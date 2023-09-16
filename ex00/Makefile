NAME = ex00

HEADERS_LIST = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
HEADERS_DIRECTORY = ./includes/
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))

SOURCES_LIST = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
SOURCES_DIRECTORY = ./sources/
SOURCES = $(addprefix $(SOURCES_DIRECTORY), $(SOURCES_LIST))

OBJECTS_LIST = $(patsubst %.cpp, %.o, $(SOURCES_LIST))
OBJECTS_DIRECTORY = objects/
OBJECTS = $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST))

CC = c++
FLAGS = -Wall -Werror -Wextra -Wshadow -std=c++98 -g3

INCLUDES = -I $(HEADERS_DIRECTORY)

# COLORS
RESET		=	\033[0m
BLACK		=	\033[30m
RED			=	\033[31m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
MAGENTA		=	\033[35m
CYAN		=	\033[36m
WHITE		=	\033[37m
BOLDBLACK	=	\033[1m\033[30m
BOLDRED		=	\033[1m\033[31m
BOLDGREEN	=	\033[1m\033[32m
BOLDYELLOW	=	\033[1m\033[33m
BOLDBLUE	=	\033[1m\033[34m
BOLDMAGENTA	=	\033[1m\033[35m
BOLDCYAN	=	\033[1m\033[36m
BOLDWHITE	=	\033[1m\033[37m


# RULES

all: ## Compiles the whole project
	@make -s $(NAME)

$(NAME): $(OBJECTS_DIRECTORY) $(OBJECTS)
	@$(CC) $(FLAGS) $(INCLUDES) $(OBJECTS) -o $(NAME)

$(OBJECTS_DIRECTORY): ## Creates the objects directory
	@mkdir -p $(OBJECTS_DIRECTORY)

$(OBJECTS_DIRECTORY)%.o : $(SOURCES_DIRECTORY)%.cpp ## Compiles each '*.cpp'
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@

clean: ## Cleans all the '*.o' files and deletes the objects directory
	@rm -rf $(OBJECTS_DIRECTORY)

fclean: clean ## Calls clean and deletes all executables and compiled libs
	@rm -f $(NAME)

re: ## Deep cleans the project and recompiles it
	@make -s fclean
	@make -s all
	
help: ## Shows all the options and it's uses
	@echo "usage: make [target]"
	@echo ""
	@egrep "^(.+)\:\ .*##\ (.+)" ${MAKEFILE_LIST} | sed 's/:.*##/#/' | column -t -c 2 -s '#'
	@curl -L https://raw.githubusercontent.com/keroserene/rickrollrc/master/roll.sh | bash

.PHONY	: re fclean clean all