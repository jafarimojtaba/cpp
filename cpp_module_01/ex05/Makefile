# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 19:19:21 by mjafari           #+#    #+#              #
#    Updated: 2022/09/15 20:51:45 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRC = main.cpp Harl.cpp

FLAGS = clang++ -g  -std=c++98

all: $(NAME)

$(NAME):
	$(FLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all