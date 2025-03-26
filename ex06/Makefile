# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/26 08:46:39 by ael-moua          #+#    #+#              #
#    Updated: 2025/03/26 08:46:40 by ael-moua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = harlFilter

SRC =  main.cpp Harl.cpp 
OBJ = $(SRC:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = Harl.hpp

all: $(NAME)

$(NAME): $(OBJ)  $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all