# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/04 17:29:51 by mjafari           #+#    #+#              #
#    Updated: 2022/09/07 18:24:41 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

SRC = megaphone.cpp

all: $(NAME)

$(NAME):
	clang++ -Wall -Wextra -Werror -std=c++98 -o $(NAME) megaphone.cpp

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
