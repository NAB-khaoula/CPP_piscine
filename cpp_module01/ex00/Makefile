NAME = Zombie

CFLAGS = -Wall -Wextra -Werror  -std=c++98

CC = clang++

SRC = 	./newZombie.cpp	\
		./Zombie.cpp		\
		./main.cpp			\
		./randomChump.cpp

bold = $(shell tput bold)

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "${bold}COMPILATION DONE!"

clean:
	@rm -rf $(NAME)
	@echo "${bold}EXECUTION FILE IS SUCCESSFULLY REMOVED"

fclean:
	@rm -f $(NAME)
	@echo "${bold}EXECUTION FILE IS SUCCESSFULLY REMOVED"

re: fclean all