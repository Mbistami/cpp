NAME=main
FLAGS=-Wall -Wextra -Werror -std=c++98 -o
CC=c++
SRC=main.cpp\
	newZombie.cpp\
	randomChump.cpp\
	Zombie.cpp

all: $(NAME)

re:
	$(CC) $(SRC) $(FLAGS) $(NAME)

clean:
	rm -rf $(NAME)

$(NAME): $(SRC)
		$(CC) $(SRC) $(FLAGS) $(NAME)