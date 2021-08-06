NAME = materia

CFLAGS = -std=c++98

CC = clang++

INCLUDE = 	AMateria.hpp	\
			Character.hpp	\
			Cure.hpp	\
			Ice.hpp		\
			ICharacter.hpp	\
			IMateriaSource.hpp	\
			MateriaSource.hpp

SRC = 	Character.cpp	\
		Cure.cpp	\
		Ice.cpp		\
		MateriaSource.cpp	\
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