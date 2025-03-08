
NAME = Zombie

SRC = zombieHorde.cpp main.cpp Zombie.cpp 
OBJ = $(SRC:.cpp=.o)
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


all: $(NAME)

$(NAME): $(OBJ) Zombie.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all