# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/17 14:53:08 by eschmitz          #+#    #+#              #
#    Updated: 2025/04/28 13:19:11 by eschmitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = LockedAnimal

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp

OBJ = $(SOURCE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re