NAME = Animals

CFLAGS = -Wall -Wextra -Werror  -std=c++98

CC = clang++

INCLUDE = 	Cat.hpp	\
			Dog.hpp	\
			Animal.hpp	\
			Brain.hpp

SRC = 	Cat.cpp	\
		Dog.cpp	\
		Animal.cpp	\
		Brain.cpp	\
		main.cpp

bold = $(shell tput bold)

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "${bold}COMPILATION DONE!"

clean:
	@rm -rf $(NAME)
	@echo "${bold}EXECUTION FILE IS SUCCESSFULLY REMOVED"

fclean:
	@rm -f $(NAME)
	@echo "${bold}EXECUTION FILE IS SUCCESSFULLY REMOVED"

re: fclean all