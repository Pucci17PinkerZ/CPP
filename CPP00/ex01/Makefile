CXX = c++
NAME = phonebook
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP
SRC= main.cpp Contact.cpp Phonebook.cpp
OBJ = $(SRC:%.cpp=%.o)
DEP = $(SRC:%.cpp=%.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@printf "cleaning obj files\n"
	rm -f $(OBJ) $(DEP)

fclean: clean
	@printf "cleaning exec too\n"
	rm -f $(NAME)

re: fclean all
	

-include $(DEP)

.PHONY: all clean fclean re