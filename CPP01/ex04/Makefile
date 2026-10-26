CXX = c++
NAME = SED_IS_FOR_LOSERS
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP
SRC= main.cpp
OBJ = $(SRC:%.cpp=%.o)
DEP = $(SRC:%.cpp=%.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -f $(NAME)

re: fclean all
	

-include $(DEP)

.PHONY: all clean fclean re