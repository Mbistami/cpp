NAME=main
FLAGS=-Wall -Wextra -Werror -std=c++98 -o
CC=c++
SRC=main.cpp\
	Animal.cpp\
	Cat.cpp\
	Dog.cpp\
	WrongAnimal.cpp\
	Brain.cpp\
	WrongCat.cpp

all: $(NAME)

re:
	$(CC) $(SRC) $(FLAGS) $(NAME)

clean:
	rm -rf $(NAME)

$(NAME): $(SRC)
		$(CC) $(SRC) $(FLAGS) $(NAME)