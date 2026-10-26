CXX = c++
NAME = phonebook
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp\
	Contact.cpp\
	Phonebook.cpp

HEADER = Contact.hpp Phonebook.hpp

all: $(NAME)

$(NAME) :
	$(CXX) $(FLAGS) $(SRC)  -o $(NAME)

clean:
	@printf "cleaning obj files\n"
	@rm -f $(OBJ)
fclean: clean
	@printf "cleaning exec too\n"
	@rm -f $(NAME)
re: fclean all
	
.PHONY : all clean fclean re