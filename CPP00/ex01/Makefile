CXX = c++
NAME = ok
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp\
OBJ = %.c = %.o
INCLUDE = 	Contact.hpp \
			Phonebook.hpp\



all : $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)
%.o: %.c
	@printf "making obj files\n"
	$(CXX) $(CFLAGS) $(SRC) $(INCLUDE) -c $< -o $@
clean: 
	@printf "cleaning obj files\n"

fclean: clean
	@printf "cleaning exec too\n"
	@rm -f $(OBJ)
re: fclean all
	
.PHONY : all clean fclean re