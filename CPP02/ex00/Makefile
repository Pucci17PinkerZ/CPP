# MAIN VARIABLES

CXX = c++
NAME = fixed
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP
INC = -I header 

#DIRECTORIES
DIR_SRC = sources/

SRC = $(DIR_SRC)main.cpp $(DIR_SRC)Fixed.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)

# RULES

all: $(NAME)

$(NAME): $(OBJ)
	@printf "linking obj files for the final meal\n"
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(DIR_SRC)%.o: $(DIR_SRC)%.cpp
	@printf "Cooking thoses .o files\n"
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

clean:
	@printf "Cleaning the plate\n"
	rm -rf $(OBJ) $(DEP)

fclean: clean
	@printf "Cleaning the kitchen too\n"
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re