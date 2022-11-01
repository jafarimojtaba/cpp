# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 10:07:28 by mjafari           #+#    #+#              #
#    Updated: 2022/11/01 18:42:35 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = t_array

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =   main.cpp

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

.PHONY: fclean clean re