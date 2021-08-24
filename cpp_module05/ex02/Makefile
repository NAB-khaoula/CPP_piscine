NAME = Bureaucrat

INCLUDE =	Bureaucrat.hpp	\
			Form.hpp

CFLAGS = -Wall -Wextra -Werror  -std=c++98

CC = clang++

SRC = 	Bureaucrat.cpp	\
		Form.cpp	\
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