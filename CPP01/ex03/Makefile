CXX = c++
NAME = UNNECESSARY_VIOLENCE
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP

SRC= main.cpp
OBJ = $(SRC:%.cpp=%.o)
DEP = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $@ -o $(NAME)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	

-include $(DEP)

.PHONY: all clean fclean re