# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 16:10:14 by mjafari           #+#    #+#              #
#    Updated: 2022/09/14 21:58:01 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz!

SRC = main.cpp Zombie.cpp zombieHorde.cpp

CC = clang++

FLAGS = -Wall -Werror -Wextra -g -std=c++98

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
