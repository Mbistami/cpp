NAME=PhoneBookTOOL
FLAGS=-Wall -Wextra -Werror -std=c++98 -o
CC=c++
SRC=Contact.cpp\
	PhoneBook.cpp\
	main.cpp

all: $(NAME)

re:
	$(CC) $(SRC) $(FLAGS) $(NAME)

fclean:
	rm -rf $(NAME)
	
clean:
	rm -rf $(NAME)

$(NAME): $(SRC)
		$(CC) $(SRC) $(FLAGS) $(NAME)