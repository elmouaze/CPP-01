# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/26 08:45:22 by ael-moua          #+#    #+#              #
#    Updated: 2025/03/26 08:45:23 by ael-moua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


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