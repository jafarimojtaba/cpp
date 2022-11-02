# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@students.42wolfsburg.de>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 16:33:20 by mjafari           #+#    #+#              #
#    Updated: 2022/10/30 17:11:54 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp

OBJ    =    $(SRC:%.cpp=%.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
       
re: fclean all

.PHONY: clean fclean re