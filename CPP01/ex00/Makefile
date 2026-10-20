CXX = c++
NAME = Zombie
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp \
OBJ = $(SRC:.cpp=.o)
HEADER = Zombie.hpp\

all : $(NAME)


$(NAME): $(OBJ)
	@printf "Linking files for final exec!\n"
	@$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@printf "compiling obj files\n"
	@$(CXX) $(FLAGS) $(SRC) $(HEADER) -c $< -o $@

clean :
	@printf "Cleaning obj files\n"
	@rm -rf $(OBJ)

fclean : clean
	@printf "Cleaning exec too\n"
	@rm -rf $(NAME)

re : fclean all


.PHONY : make clean fclean re