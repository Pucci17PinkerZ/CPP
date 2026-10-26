CXX = c++
NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:%.cpp = %.o)

all: $(NAME)

$(NAME) : $(OBJ)
	@printf "linking object files\n"
	@$(CXX) $(FLAGS) $(OBJ) -o $(NAME)
%.o : %.c
	@printf "compiling obj\n"
	@$(CXX) $(FLAGS) $(SRC) -c $< -o $@
clean :
	@printf "Cleaning all the files\n"
	@rm -f $(OBJ)
fclean : clean
	@printf "removing the executable too\n"
	@rm -f $(NAME)
re : fclean all

.PHONY : all clean fclean re