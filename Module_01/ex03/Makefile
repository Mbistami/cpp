NAME=main
FLAGS=-Wall -Wextra -Werror -std=c++98 -o
CC=c++
SRC=main.cpp\
	HumanA.cpp\
	HumanB.cpp\
	Weapon.cpp

all: $(NAME)

re:
	$(CC) $(SRC) $(FLAGS) $(NAME)

clean:
	rm -rf $(NAME)
	
fclean:
	rm -rf $(NAME)

$(NAME): $(SRC)
		$(CC) $(SRC) $(FLAGS) $(NAME)