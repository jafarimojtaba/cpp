# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/10 19:44:03 by mjafari           #+#    #+#              #
#    Updated: 2022/09/10 19:49:12 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DreamJob

SRC = tests.cpp Account.cpp

FLAGS = clang++ -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
	$(FLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
