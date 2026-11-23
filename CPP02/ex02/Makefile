CXX = c++
NAME = fixed
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:%.cpp=%.o)
DEP = $(SRC:%.cpp=%.d)

all: $(NAME)

$(NAME): $(OBJ)
	@printf "linking obj files for the final meal\n"
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

%.o: %.cpp
	@printf "Cooking thoses .o files\n"
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	@printf "Cleaning the kitchen too\n"
	rm -f $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
