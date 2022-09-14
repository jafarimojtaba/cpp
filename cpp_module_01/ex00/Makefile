# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 16:10:14 by mjafari           #+#    #+#              #
#    Updated: 2022/09/14 16:15:50 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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
