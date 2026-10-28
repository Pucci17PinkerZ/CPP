# MAIN VARIABLES

CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

# DIRECTORIES

DIR_INC= includes
DIR_SRC= src

# RULES

all: $(NAME)

$(NAME): $(OBJ)
	@printf "linking obj files for the final meal\n"
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)
%.o: %.cpp $(DEP)
	@printf "Cooking thoses .o files\n"
	$(CXX) $(CXXFLAGS) $(SRC) -c $< -o $@
clean:
	@printf "Cleaning the plate\n"
	rm -rf $(OBJ) $(DEP)
fclean: clean
	@printf "Cleaning the kitchen too\n"
	rm -rf $(NAME)
re: fclean all

-include $(DEP)

.PHONY: all clean fclean re