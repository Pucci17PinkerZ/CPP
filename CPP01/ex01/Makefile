CXX = c++
NAME = ZombieHorde
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP
SRC = main.cpp
OBJ = $(SRC:%.cpp=%.o)
DEP =$(SRC:%.cpp=%.d)

all: $(NAME)

$(NAME): $(OBJ)
	@printf "cooking the final exec\n"
	$(CXX) $(CXXFLAGS) -o $(NAME)

%.o: %.cpp
	@printf "compiling files in obj\n"
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	@printf "cleaning the .o && .d\n"
	rm -f $(OBJ) $(DEP)
fclean: clean
	@printf "cleaning the exec too\n"
	rm -f $(NAME)
re: fclean all

.PHONY all clean fclean re