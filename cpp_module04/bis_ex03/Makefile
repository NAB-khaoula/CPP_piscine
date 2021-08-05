NAME = materia

CFLAGS = -std=c++98

CC = g++

INCLUDE = 	AMateria.hpp	\
			Cure.hpp	\
			Ice.hpp		\

SRC = 	AMateria.cpp	\
		Cure.cpp	\
		Ice.cpp		\
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
